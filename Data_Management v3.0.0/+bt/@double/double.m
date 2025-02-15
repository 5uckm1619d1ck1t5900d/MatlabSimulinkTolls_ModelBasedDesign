%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Nexteer DataType Class Definition %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Double Datatype class definition
classdef double < Simulink.AliasType
    properties (Constant = true)
        Signed = true;
        InterfacePath = '/PortInterfaces/CalPortInterface_double';
        dtMin  = -1.7976931348623157E+308;     %Minimum allowed (Cnt)
        dtMax  =  1.7976931348623157E+308;      %Maximum allowed (Cnt)
    end
    properties
        dtScl;       %FloatToFixed
    end
    properties (Dependent)
        enMin;%Minimum allowed (engineering units)
        enMax;%Maximum allowed (engineering units)
    end
    
    methods
        function obj = double(~)
            obj.dtScl = 1;
            obj.BaseType = 'double';
        end
        
        function val = get.enMin(obj)
            val = obj.dtMin/obj.dtScl;
        end
        
        function val = get.enMax(obj)
            val = obj.dtMax/obj.dtScl;
        end
        
        function [engmin,scaledmin,str] = validateUserEngMin(obj,val)
            if isempty(val)
                val = 0;
            end
            if (val < obj.enMin) || (val > obj.enMax)
                val = obj.enMin;
                str = 'In workspace, %s.EngMin is not within the data types Min/Max limits and has been limited to %s.\nPlease update your saved files.';
            else
                str = '';
            end
            engmin = val;
            scaledmin = double(single(val*obj.dtScl));
        end
        
        function [engmax,scaledmax,str] = validateUserEngMax(obj,val)
            if isempty(val)
                val = 0;
            end
            if (val > obj.enMax) || (val < obj.enMin)
                val = obj.enMax;
                str = 'In workspace, %s.EngMax is not within the data types Min/Max limits and has been limited to %s.\nPlease update your saved files.';
            else
                str = '';
            end
            engmax = val;
            scaledmax = double(single(val*obj.dtScl));
        end
        
        function [engval,scaledval,str] = validateUserEngVal(dtobj,calobj,val)
            if (any(any(val > calobj.EngMax)))
                val = min(val,calobj.EngMax);
                str = 'In workspace, %s.EngVal has been limited to the EngMax.\nPlease update your saved files.';
            elseif (any(any(val < calobj.EngMin)))
                val = max(val,calobj.EngMin);
                str = 'In workspace, %s.EngVal has been increased to the EngMin.\nPlease update your saved files.';
            else
                str = '';
            end
            engval = val;
            scaledval = double(single(val*dtobj.dtScl));
        end
        
        function [enginit,scaledinit,str] = validateUserEngInit(dtobj,calobj,val)
            if (any(any(val > calobj.EngMax)))
                val = min(val,calobj.EngMax);
                str = 'In workspace, %s.EngInit has been limited to the EngMax.\nPlease update your saved files.';
            elseif (any(any(val < calobj.EngMin)))
                val = max(val,calobj.EngMin);
                str = 'In workspace, %s.EngInit has been increased to the EngMin.\nPlease update your saved files.';
            else
                str = '';
            end
            enginit = val;
            scaledinit = num2str(double(single(val*dtobj.dtScl)));
        end
        
        function [engdt,str] = validateUserEngDT(dtobj,val)
            meta = metaclass(val);
            pname = meta.ContainingPackage.Name;
            % "meta.ContainingPackage" will tell us what kind of object the user has given.
            if (isempty(meta.ContainingPackage)) || ((~strcmp('dt',pname)) && (~strcmp('enum',pname)) && (~strcmp('enumEA3',pname)) && (~strcmp('struct',pname)) && (~strcmp('structEA3',pname)))
                engdt = dtobj;
                str = '%s.EngDT input is not a ''dt'', ''enum'', or ''enumEA3'' object.';
            else
                engdt = val;
                str = '';
            end
            
        end
        
    end
    
    
end