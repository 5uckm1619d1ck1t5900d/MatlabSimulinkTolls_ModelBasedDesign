%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Nexteer DataType Class Definition %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

classdef s10p5 < bt.sint16
    methods
        function obj = s10p5(~)
            obj = obj@bt.sint16(5);
            obj.Description = 'fixdt(1,16,5)';
        end
    end
    
end

