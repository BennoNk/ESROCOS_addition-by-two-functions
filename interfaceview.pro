isComponentType('interfaceview::FV::manager','PUBLIC','PI_clock','SUBPROGRAM','NIL','').
isComponentImplementation('interfaceview::FV::manager','PUBLIC','PI_clock','others','SUBPROGRAM','NIL','others','').
isFeature('ACCESS','interfaceview::IV','manager','PI_clock','PROVIDES','SUBPROGRAM','interfaceview::FV::manager::PI_clock.others','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::manager','PI_clock','NIL','NIL','Taste::Associated_Queue_Size','1','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_clock','Taste::coordinates','"106990 74533"','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_clock','Taste::RCMoperationKind','cyclic','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_clock','Taste::RCMperiod','2000 ms','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_clock','Taste::Deadline','2000 ms','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_clock','Taste::InterfaceName','"clock"','').
isProperty('NIL','=>','interfaceview::FV::manager','PI_clock','others','NIL','Compute_Execution_Time','0 ms .. 2000 ms','').
isSubcomponent('interfaceview::IV','manager','others','clock_impl','SUBPROGRAM','interfaceview::FV::manager::PI_clock.others','NIL','NIL','').
isConnection('SUBPROGRAM ACCESS','interfaceview::IV','manager','others','OpToPICnx_clock_impl','clock_impl','->','PI_clock','NIL','').
isConnection('SUBPROGRAM ACCESS','interfaceview::IV','interfaceview','others','manager_PI_sum_addition_RI_sum','manager.PI_sum','->','addition.RI_sum','NIL','').
isProperty('NIL','=>','interfaceview::IV','interfaceview','others','manager_PI_sum_addition_RI_sum','Taste::coordinates','"174917 82270 161520 82270 161520 82270 148123 82270"','').
isComponentType('interfaceview::FV::manager','PUBLIC','PI_sum','SUBPROGRAM','NIL','').
isComponentImplementation('interfaceview::FV::manager','PUBLIC','PI_sum','others','SUBPROGRAM','NIL','others','').
isFeature('ACCESS','interfaceview::IV','manager','PI_sum','PROVIDES','SUBPROGRAM','interfaceview::FV::manager::PI_sum.others','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::manager','PI_sum','NIL','NIL','Taste::Associated_Queue_Size','1','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_sum','Taste::coordinates','"148123 82270"','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_sum','Taste::RCMoperationKind','unprotected','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_sum','Taste::RCMperiod','0 ms','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_sum','Taste::Deadline','0 ms','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','PI_sum','Taste::InterfaceName','"sum"','').
isFeature('PARAMETER','interfaceview::FV::manager','PI_sum','sum_param','IN','NIL','DataView::T_Int8','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::manager','PI_sum','NIL','sum_param','Taste::encoding','NATIVE','').
isProperty('NIL','=>','interfaceview::FV::manager','PI_sum','others','NIL','Compute_Execution_Time','0 ms .. 0 ms','').
isSubcomponent('interfaceview::IV','manager','others','sum_impl','SUBPROGRAM','interfaceview::FV::manager::PI_sum.others','NIL','NIL','').
isConnection('SUBPROGRAM ACCESS','interfaceview::IV','manager','others','OpToPICnx_sum_impl','sum_impl','->','PI_sum','NIL','').
isConnection('SUBPROGRAM ACCESS','interfaceview::IV','interfaceview','others','addition_PI_numbers_manager_RI_numbers','addition.PI_numbers','->','manager.RI_numbers','NIL','').
isProperty('NIL','=>','interfaceview::IV','interfaceview','others','addition_PI_numbers_manager_RI_numbers','Taste::coordinates','"148123 103583 161520 103583 161520 103592 174917 103592"','').
isComponentType('interfaceview::FV::manager','PUBLIC','RI_numbers','SUBPROGRAM','NIL','').
isComponentImplementation('interfaceview::FV::manager','PUBLIC','RI_numbers','others','SUBPROGRAM','NIL','others','').
isImportDeclaration('interfaceview::IV','PUBLIC','interfaceview::FV::addition','').
isFeature('ACCESS','interfaceview::IV','manager','RI_numbers','REQUIRES','SUBPROGRAM','interfaceview::FV::addition::PI_numbers.others','NIL','NIL','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','RI_numbers','Taste::coordinates','"148123 103583"','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','RI_numbers','Taste::RCMoperationKind','any','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','RI_numbers','Taste::InterfaceName','"numbers"','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','RI_numbers','Taste::labelInheritance','"true"','').
isFeature('PARAMETER','interfaceview::FV::manager','RI_numbers','number1','IN','NIL','DataView::T_Int8','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::manager','RI_numbers','NIL','number1','Taste::encoding','NATIVE','').
isFeature('PARAMETER','interfaceview::FV::manager','RI_numbers','number2','IN','NIL','DataView::T_Int8','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::manager','RI_numbers','NIL','number2','Taste::encoding','NATIVE','').
isPackage('interfaceview::FV::manager','PUBLIC','').
isComponentType('interfaceview::IV','PUBLIC','manager','SYSTEM','NIL','').
isComponentImplementation('interfaceview::IV','PUBLIC','manager','others','SYSTEM','NIL','others','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','NIL','Source_Language','(C)','').
isProperty('NIL','=>','interfaceview::IV','manager','NIL','NIL','Taste::Active_Interfaces','any','').
isProperty('NIL','=>','interfaceview::IV','interfaceview','others','manager','Taste::coordinates','"96233 74533 148123 114158"','').
isSubcomponent('interfaceview::IV','interfaceview','others','manager','SYSTEM','interfaceview::IV::manager.others','NIL','NIL','').
isImportDeclaration('interfaceview::IV','PUBLIC','interfaceview::FV::manager','').
isImportDeclaration('interfaceview::IV','PUBLIC','Taste','').
isImportDeclaration('interfaceview::FV::manager','PUBLIC','Taste','').
isImportDeclaration('interfaceview::IV','PUBLIC','DataView','').
isImportDeclaration('interfaceview::FV::manager','PUBLIC','DataView','').
isImportDeclaration('interfaceview::FV::manager','PUBLIC','TASTE_IV_Properties','').
isImportDeclaration('interfaceview::IV','PUBLIC','TASTE_IV_Properties','').
isComponentType('interfaceview::FV::addition','PUBLIC','PI_numbers','SUBPROGRAM','NIL','').
isComponentImplementation('interfaceview::FV::addition','PUBLIC','PI_numbers','others','SUBPROGRAM','NIL','others','').
isFeature('ACCESS','interfaceview::IV','addition','PI_numbers','PROVIDES','SUBPROGRAM','interfaceview::FV::addition::PI_numbers.others','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::addition','PI_numbers','NIL','NIL','Taste::Associated_Queue_Size','1','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','PI_numbers','Taste::coordinates','"174917 103592"','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','PI_numbers','Taste::RCMoperationKind','unprotected','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','PI_numbers','Taste::RCMperiod','0 ms','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','PI_numbers','Taste::Deadline','0 ms','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','PI_numbers','Taste::InterfaceName','"numbers"','').
isFeature('PARAMETER','interfaceview::FV::addition','PI_numbers','number1','IN','NIL','DataView::T_Int8','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::addition','PI_numbers','NIL','number1','Taste::encoding','NATIVE','').
isFeature('PARAMETER','interfaceview::FV::addition','PI_numbers','number2','IN','NIL','DataView::T_Int8','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::addition','PI_numbers','NIL','number2','Taste::encoding','NATIVE','').
isProperty('NIL','=>','interfaceview::FV::addition','PI_numbers','others','NIL','Compute_Execution_Time','0 ms .. 0 ms','').
isSubcomponent('interfaceview::IV','addition','others','numbers_impl','SUBPROGRAM','interfaceview::FV::addition::PI_numbers.others','NIL','NIL','').
isConnection('SUBPROGRAM ACCESS','interfaceview::IV','addition','others','OpToPICnx_numbers_impl','numbers_impl','->','PI_numbers','NIL','').
isComponentType('interfaceview::FV::addition','PUBLIC','RI_sum','SUBPROGRAM','NIL','').
isComponentImplementation('interfaceview::FV::addition','PUBLIC','RI_sum','others','SUBPROGRAM','NIL','others','').
isFeature('ACCESS','interfaceview::IV','addition','RI_sum','REQUIRES','SUBPROGRAM','interfaceview::FV::manager::PI_sum.others','NIL','NIL','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','RI_sum','Taste::coordinates','"174917 82270"','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','RI_sum','Taste::RCMoperationKind','any','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','RI_sum','Taste::InterfaceName','"sum"','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','RI_sum','Taste::labelInheritance','"true"','').
isFeature('PARAMETER','interfaceview::FV::addition','RI_sum','sum_param','IN','NIL','DataView::T_Int8','NIL','NIL','').
isProperty('NIL','=>','interfaceview::FV::addition','RI_sum','NIL','sum_param','Taste::encoding','NATIVE','').
isPackage('interfaceview::FV::addition','PUBLIC','').
isComponentType('interfaceview::IV','PUBLIC','addition','SYSTEM','NIL','').
isComponentImplementation('interfaceview::IV','PUBLIC','addition','others','SYSTEM','NIL','others','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','NIL','Source_Language','(C)','').
isProperty('NIL','=>','interfaceview::IV','addition','NIL','NIL','Taste::Active_Interfaces','any','').
isProperty('NIL','=>','interfaceview::IV','interfaceview','others','addition','Taste::coordinates','"174917 74722 226807 114158"','').
isSubcomponent('interfaceview::IV','interfaceview','others','addition','SYSTEM','interfaceview::IV::addition.others','NIL','NIL','').
isImportDeclaration('interfaceview::FV::addition','PUBLIC','Taste','').
isImportDeclaration('interfaceview::FV::addition','PUBLIC','DataView','').
isImportDeclaration('interfaceview::FV::addition','PUBLIC','TASTE_IV_Properties','').
isProperty('_','_','_','_','_','_','LMP::Unparser_ID_Case','AsIs','').
isProperty('_','_','_','_','_','_','LMP::Unparser_Insert_Header','Yes','').
isPackage('interfaceview::IV','PUBLIC','').
isProperty('NIL','=>','interfaceview::IV','NIL','NIL','NIL','Taste::dataView','("DataView")','').
isProperty('NIL','=>','interfaceview::IV','NIL','NIL','NIL','Taste::dataViewPath','("addition-by-two-functions_dv.aadl")','').
isProperty('NIL','=>','interfaceview::IV','interfaceview','NIL','NIL','Taste::dataView','("DataView")','').
isProperty('NIL','=>','interfaceview::IV','interfaceview','NIL','NIL','Taste::dataViewPath','("addition-by-two-functions_dv.aadl")','').
isVersion('AADL2.1','TASTE type interfaceview','','generated code: do not edit').
isProperty('NIL','=>','interfaceview::IV','NIL','NIL','NIL','Taste::coordinates','"0 0 297000 210000"','').
isProperty('NIL','=>','interfaceview::IV','NIL','NIL','NIL','Taste::version','"1.3"','').
isComponentType('interfaceview::IV','PUBLIC','interfaceview','SYSTEM','NIL','').
isComponentImplementation('interfaceview::IV','PUBLIC','interfaceview','others','SYSTEM','NIL','others','').

