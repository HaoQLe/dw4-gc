#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_8012FEB0();
void fn_80151D58();
void igChildEdit_register();
void igOptVisitObject_register();
extern char igCollapseAllHierarchies_className[];
extern char igChildEditForNode_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igCollapseAllHierarchies_vtable[];
extern char igChildEditForNode_vtable[];
extern char lbl_804A8358[];
extern char lbl_804AA710[];
extern char lbl_804AAF48[];
extern char lbl_8055F71C[4];
extern char igCollapseAllHierarchies_fieldTypes[4];
extern char igCollapseAllHierarchies_fieldNames[4];
extern char igCollapseAllHierarchies_fieldStorage[4];
extern char igCollapseAllHierarchies_fieldOffsets[4];
extern char igChildEditForNode_dependencies[8];
extern void *igCollapseAllHierarchies_meta;
extern void *igChildEditForNode_meta;
extern void *igChildEdit_meta;
void *igCollapseAllHierarchies_getMeta();
void *igCollapseAllHierarchies_vtableRead();
void igCollapseAllHierarchies_arkRegister();
void igCollapseAllHierarchies_register();
void *igCollapseAllHierarchies_getMetaCall();
void igCollapseAllHierarchies_fieldInit();
void *igChildEditForNode_getMeta();
void *igChildEditForNode_vtableRead();
void igChildEditForNode_arkRegister();
void igChildEditForNode_register();
void *igChildEditForNode_getMetaCall();
void *igChildEditForNode_parentMeta();
}
struct UnknownGenRoot8015189C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015189C(){igObject_construct(this);}
};
struct UnknownGenObject8015189C_0 : UnknownGenRoot8015189C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015189C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8015189C_1 : UnknownGenObject8015189C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8015189C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8015189C : UnknownGenObject8015189C_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8015189C(){unknown00=igCollapseAllHierarchies_vtable;}
};
struct UnknownGenRoot80151B8C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151B8C(){igObject_construct(this);}
};
struct UnknownGenObject80151B8C_0 : UnknownGenRoot80151B8C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151B8C_0(){unknown00=lbl_804A8358;}
};
struct UnknownGenObject80151B8C : UnknownGenObject80151B8C_0 {
 char unknown28[8];
 inline ~UnknownGenObject80151B8C(){unknown00=igChildEditForNode_vtable;}
};
extern "C" {
void *igCollapseAllHierarchies_getMeta(){
 if(!igCollapseAllHierarchies_meta || !(reinterpret_cast<unsigned int *>(igCollapseAllHierarchies_meta)[0x24/4]&4)) igCollapseAllHierarchies_arkRegister();
 return igCollapseAllHierarchies_meta;
}
void *igCollapseAllHierarchies_vtableRead(){
 UnknownGenObject8015189C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igCollapseAllHierarchies_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseAllHierarchies_arkRegister(){
 meta_registerNow((int)igCollapseAllHierarchies_register);
}
void igCollapseAllHierarchies_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseAllHierarchies_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igCollapseAllHierarchies_getMetaCall,(int)igCollapseAllHierarchies_className,48,(int)igCollapseAllHierarchies_vtableRead,(int)igCollapseAllHierarchies_fieldInit,0,0);
}
void *igCollapseAllHierarchies_getMetaCall(){return igCollapseAllHierarchies_getMeta();}
void igCollapseAllHierarchies_fieldInit(){
 void *value0=igCollapseAllHierarchies_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igCollapseAllHierarchies_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80071694(value2,lbl_8055F71C);
 meta_setupFields(value0,igCollapseAllHierarchies_fieldNames,igCollapseAllHierarchies_fieldStorage,igCollapseAllHierarchies_fieldOffsets,value1);
}
void *igChildEditForNode_getMeta(){
 if(!igChildEditForNode_meta || !(reinterpret_cast<unsigned int *>(igChildEditForNode_meta)[0x24/4]&4)) igChildEditForNode_arkRegister();
 return igChildEditForNode_meta;
}
void *igChildEditForNode_vtableRead(){
 UnknownGenObject80151B8C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA710;
 object.unknown00=lbl_804A8358;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igChildEditForNode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igChildEditForNode_arkRegister(){
 meta_registerNow((int)igChildEditForNode_register);
}
void igChildEditForNode_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igChildEditForNode_meta,(int)igChildEdit_register,(int)igChildEditForNode_parentMeta,(int)igChildEditForNode_getMetaCall,(int)igChildEditForNode_className,40,(int)igChildEditForNode_vtableRead,(int)fn_80151D58,0,(int)igChildEditForNode_dependencies);
}
void *igChildEditForNode_getMetaCall(){return igChildEditForNode_getMeta();}
void *igChildEditForNode_parentMeta(){return igChildEdit_meta;}
}
#pragma pop
