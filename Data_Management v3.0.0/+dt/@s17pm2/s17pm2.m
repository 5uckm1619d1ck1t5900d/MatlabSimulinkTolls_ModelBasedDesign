%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Nexteer DataType Class Definition %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

classdef s17pm2 < bt.sint16
    methods
        function obj = s17pm2(~)
            obj = obj@bt.sint16(-2);
            obj.Description = 'fixdt(1,16,-2)';
        end
    end
    
end

