function defs = csc_registration(action)

%   Copyright 1994-2014 The MathWorks, Inc.
%   $Revision: $  $Date: $


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% NOTE:
% - This file was automatically generated by the Simulink custom storage class
%   designer.
% - The contents of this file are arranged so that the Simulink custom storage
%   class designer can load the associated classes for editing.
% - Hand modification of this file is not recommended as it may prevent the
%   Simulink custom storage class designer from loading the associated classes.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% - Generated on:   25-Jun-2014 15:02:28
% - MATLAB version: 8.2.0.701 (R2013b)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


switch action

  case 'CSCDefn'
    defs = [];

    h = Simulink.CSCRefDefn;
    set(h, 'Name', 'PerInstanceMemory');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'RefPackageName', 'AUTOSAR');
    set(h, 'RefDefnName', 'PerInstanceMemory');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'BitField');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'FlatStructure');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', true);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', false);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', false);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', false);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', 'Simulink.CSCTypeAttributes_FlatStructure');
        set(h.CSCTypeAttributes, 'StructName', '');
        set(h.CSCTypeAttributes, 'IsStructNameInstanceSpecific', true);
        set(h.CSCTypeAttributes, 'BitPackBoolean', true);
        set(h.CSCTypeAttributes, 'IsTypeDef', true);
        set(h.CSCTypeAttributes, 'TypeName', '');
        set(h.CSCTypeAttributes, 'TypeToken', '');
        set(h.CSCTypeAttributes, 'TypeTag', '');
    set(h, 'TLCFileName', 'FlatStructure.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'Const');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'MemConst');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', false);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', true);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', true);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'Volatile');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'MemVolatile');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', true);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', true);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'ConstVolatile');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'MemConstVolatile');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', false);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', true);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', true);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'Define');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', false);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Macro');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', false);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', false);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'ImportedDefine');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', false);
    set(h, 'DataScope', 'Imported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Macro');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', false);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', false);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'ExportToFile');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', true);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', true);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'ImportFromFile');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'Imported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', false);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', false);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'FileScope');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'File');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', false);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', false);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', false);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'Struct');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'FlatStructure');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', true);
        set(h.DataUsage, 'IsParameter', true);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'Exported');
    set(h, 'IsDataScopeInstanceSpecific', false);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Auto');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', false);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', false);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', false);
    set(h, 'IsReusable', false);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', 'Simulink.CSCTypeAttributes_FlatStructure');
        set(h.CSCTypeAttributes, 'StructName', '');
        set(h.CSCTypeAttributes, 'IsStructNameInstanceSpecific', true);
        set(h.CSCTypeAttributes, 'BitPackBoolean', false);
        set(h.CSCTypeAttributes, 'IsTypeDef', true);
        set(h.CSCTypeAttributes, 'TypeName', '');
        set(h.CSCTypeAttributes, 'TypeToken', '');
        set(h.CSCTypeAttributes, 'TypeTag', '');
    set(h, 'TLCFileName', 'FlatStructure.tlc');
    defs = [defs; h];

    h = Simulink.CSCRefDefn;
    set(h, 'Name', 'GetSet');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'RefPackageName', 'Simulink');
    set(h, 'RefDefnName', 'GetSet');
    defs = [defs; h];

    h = Simulink.CSCRefDefn;
    set(h, 'Name', 'CompilerFlag');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'RefPackageName', 'Simulink');
    set(h, 'RefDefnName', 'CompilerFlag');
    defs = [defs; h];

    h = Simulink.CSCDefn;
    set(h, 'Name', 'Reusable');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'CSCType', 'Unstructured');
    set(h, 'MemorySection', 'Default');
    set(h, 'IsMemorySectionInstanceSpecific', false);
    set(h, 'IsGrouped', false);
        set(h.DataUsage, 'IsParameter', false);
        set(h.DataUsage, 'IsSignal', true);
    set(h, 'DataScope', 'Auto');
    set(h, 'IsDataScopeInstanceSpecific', true);
    set(h, 'IsAutosarPerInstanceMemory', false);
    set(h, 'DataInit', 'Dynamic');
    set(h, 'IsDataInitInstanceSpecific', false);
    set(h, 'DataAccess', 'Direct');
    set(h, 'IsDataAccessInstanceSpecific', false);
    set(h, 'HeaderFile', '');
    set(h, 'IsHeaderFileInstanceSpecific', true);
    set(h, 'Owner', '');
    set(h, 'IsOwnerInstanceSpecific', true);
    set(h, 'DefinitionFile', '');
    set(h, 'IsDefinitionFileInstanceSpecific', true);
    set(h, 'IsReusable', true);
    set(h, 'IsReusableInstanceSpecific', false);
    set(h, 'CommentSource', 'Default');
    set(h, 'TypeComment', '');
    set(h, 'DeclareComment', '');
    set(h, 'DefineComment', '');
    set(h, 'CSCTypeAttributesClassName', '');
    set(h, 'CSCTypeAttributes', []);
    set(h, 'TLCFileName', 'Unstructured.tlc');
    defs = [defs; h];

  case 'MemorySectionDefn'
    defs = [];

    h = Simulink.MemorySectionDefn;
    set(h, 'Name', 'MemConst');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'Comment', '/* Const memory section */');
    set(h, 'PragmaPerVar', false);
    set(h, 'PrePragma', '');
    set(h, 'PostPragma', '');
    set(h, 'IsConst', true);
    set(h, 'IsVolatile', false);
    set(h, 'Qualifier', '');
    defs = [defs; h];

    h = Simulink.MemorySectionDefn;
    set(h, 'Name', 'MemVolatile');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'Comment', '/* Volatile memory section */');
    set(h, 'PragmaPerVar', false);
    set(h, 'PrePragma', '');
    set(h, 'PostPragma', '');
    set(h, 'IsConst', false);
    set(h, 'IsVolatile', true);
    set(h, 'Qualifier', '');
    defs = [defs; h];

    h = Simulink.MemorySectionDefn;
    set(h, 'Name', 'MemConstVolatile');
    set(h, 'OwnerPackage', 'DataDict');
    set(h, 'Comment', '/* ConstVolatile memory section */');
    set(h, 'PragmaPerVar', false);
    set(h, 'PrePragma', '');
    set(h, 'PostPragma', '');
    set(h, 'IsConst', true);
    set(h, 'IsVolatile', true);
    set(h, 'Qualifier', '');
    defs = [defs; h];

  otherwise
    DAStudio.error('Simulink:dialog:CSCRegInvalidAction', action);
end  % switch action


%EOF
