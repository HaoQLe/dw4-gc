#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void igCollapseNode_register();
void igFlattenHierarchy_fieldInit();
void igObjectList_register();
void igOptBase_register();
void igOptVisitObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igGeometryListList_className[];
extern char igGatherTransforms_className[];
extern char igGatherSpatialPartitions_className[];
extern char igGatherCompileGraphs_className[];
extern char igFlattenNodeForTransform_className[];
extern char igFlattenNodeForGroup_className[];
extern char igFlattenNodeForAttrSet_className[];
extern char igFlattenNode_className[];
extern char igFlattenHierarchy_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igGatherTransforms_vtable[];
extern char igGatherSpatialPartitions_vtable[];
extern char igGatherCompileGraphs_vtable[];
extern char igFlattenHierarchy_vtable[];
extern char igFlattenNodeForAttrSet_vtable[];
extern char igFlattenNodeForGroup_vtable[];
extern char igFlattenNodeForTransform_vtable[];
extern char lbl_804A8050[];
extern char lbl_804A934C[];
extern char igGeometryListList_vtable[];
extern char lbl_804A9448[];
extern char lbl_804AAF48[];
extern char igGeometryListList_dependencies[8];
extern char igGatherTransforms_fieldTypes[4];
extern char igGatherTransforms_fieldNames[4];
extern char igGatherTransforms_fieldStorage[4];
extern char igGatherTransforms_fieldOffsets[4];
extern char igGatherCompileGraphs_fieldTypes[4];
extern char igGatherCompileGraphs_fieldNames[4];
extern char igGatherCompileGraphs_fieldStorage[4];
extern char igGatherCompileGraphs_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igGeometryListList_meta;
extern void *igGatherTransforms_meta;
extern void *igGatherSpatialPartitions_meta;
extern void *igGatherCompileGraphs_meta;
extern void *igFlattenNodeForTransform_meta;
extern void *igFlattenNodeForGroup_meta;
extern void *igFlattenNodeForAttrSet_meta;
extern void *igFlattenNode_meta;
extern void *igFlattenHierarchy_meta;
extern void *igCollapseNode_meta;
void *igGeometryListList_getMeta();
void *igGeometryListList_vtableRead();
void igGeometryListList_arkRegister();
void igGeometryListList_register();
void *igGeometryListList_getMetaCall();
void *igGatherTransforms_getMeta();
void *igGatherTransforms_vtableRead();
void igGatherTransforms_arkRegister();
void igGatherTransforms_register();
void *igGatherTransforms_getMetaCall();
void igGatherTransforms_fieldInit();
void *igGatherSpatialPartitions_getMeta();
void *igGatherSpatialPartitions_vtableRead();
void igGatherSpatialPartitions_arkRegister();
void igGatherSpatialPartitions_register();
void *igGatherSpatialPartitions_getMetaCall();
void *igGatherCompileGraphs_getMeta();
void *igGatherCompileGraphs_vtableRead();
void igGatherCompileGraphs_arkRegister();
void igGatherCompileGraphs_register();
void *igGatherCompileGraphs_getMetaCall();
void igGatherCompileGraphs_fieldInit();
void *igFlattenNodeForTransform_getMeta();
void *igFlattenNodeForTransform_vtableRead();
void igFlattenNodeForTransform_arkRegister();
void igFlattenNodeForTransform_register();
void *igFlattenNodeForTransform_getMetaCall();
void *fn_80148640();
void *igFlattenNodeForGroup_getMeta();
void *igFlattenNodeForGroup_vtableRead();
void igFlattenNodeForGroup_arkRegister();
void igFlattenNodeForGroup_register();
void *igFlattenNodeForGroup_getMetaCall();
void *igFlattenNodeForAttrSet_getMeta();
void *igFlattenNodeForAttrSet_vtableRead();
void igFlattenNodeForAttrSet_arkRegister();
void igFlattenNodeForAttrSet_register();
void *igFlattenNodeForAttrSet_getMetaCall();
void *igFlattenNode_getMeta();
void igFlattenNode_arkRegister();
void igFlattenNode_register();
void *igFlattenNode_getMetaCall();
void *fn_80148B20();
void *igFlattenHierarchy_getMeta();
void *igFlattenHierarchy_vtableRead();
void igFlattenHierarchy_arkRegister();
void igFlattenHierarchy_register();
void *igFlattenHierarchy_getMetaCall();
}
struct UnknownGenObject80147B40_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80147CA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80147CA0(){igObject_construct(this);}
};
struct UnknownGenObject80147CA0_0 : UnknownGenRoot80147CA0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80147CA0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80147CA0_1 : UnknownGenObject80147CA0_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80147CA0_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80147CA0 : UnknownGenObject80147CA0_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80147CA0(){unknown00=igGatherTransforms_vtable;}
};
struct UnknownGenRoot80147F7C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80147F7C(){igObject_construct(this);}
};
struct UnknownGenObject80147F7C_0 : UnknownGenRoot80147F7C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80147F7C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80147F7C_1 : UnknownGenObject80147F7C_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80147F7C_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80147F7C : UnknownGenObject80147F7C_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80147F7C(){unknown00=igGatherSpatialPartitions_vtable;}
};
struct UnknownGenRoot801481A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801481A8(){igObject_construct(this);}
};
struct UnknownGenObject801481A8_0 : UnknownGenRoot801481A8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801481A8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801481A8_1 : UnknownGenObject801481A8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject801481A8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject801481A8 : UnknownGenObject801481A8_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject801481A8(){unknown00=igGatherCompileGraphs_vtable;}
};
struct UnknownGenRoot80148484 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80148484(){igObject_construct(this);}
};
struct UnknownGenObject80148484_0 : UnknownGenRoot80148484 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80148484_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80148484_1 : UnknownGenObject80148484_0 {
 inline ~UnknownGenObject80148484_1(){unknown00=lbl_804A934C;}
};
struct UnknownGenObject80148484 : UnknownGenObject80148484_1 {
 char unknown28[8];
 inline ~UnknownGenObject80148484(){unknown00=igFlattenNodeForTransform_vtable;}
};
struct UnknownGenRoot80148684 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80148684(){igObject_construct(this);}
};
struct UnknownGenObject80148684_0 : UnknownGenRoot80148684 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80148684_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80148684_1 : UnknownGenObject80148684_0 {
 inline ~UnknownGenObject80148684_1(){unknown00=lbl_804A934C;}
};
struct UnknownGenObject80148684 : UnknownGenObject80148684_1 {
 char unknown28[8];
 inline ~UnknownGenObject80148684(){unknown00=igFlattenNodeForGroup_vtable;}
};
struct UnknownGenRoot8014887C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014887C(){igObject_construct(this);}
};
struct UnknownGenObject8014887C_0 : UnknownGenRoot8014887C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014887C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014887C_1 : UnknownGenObject8014887C_0 {
 inline ~UnknownGenObject8014887C_1(){unknown00=lbl_804A934C;}
};
struct UnknownGenObject8014887C : UnknownGenObject8014887C_1 {
 char unknown28[8];
 inline ~UnknownGenObject8014887C(){unknown00=igFlattenNodeForAttrSet_vtable;}
};
struct UnknownGenRoot80148B64 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80148B64(){igObject_construct(this);}
};
struct UnknownGenObject80148B64_0 : UnknownGenRoot80148B64 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80148B64_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80148B64 : UnknownGenObject80148B64_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80148B64(){unknown00=igFlattenHierarchy_vtable;}
};
extern "C" {
void *fn_80148B20(){return igCollapseNode_meta;}
void *igFlattenHierarchy_getMeta(){
 if(!igFlattenHierarchy_meta || !(reinterpret_cast<unsigned int *>(igFlattenHierarchy_meta)[0x24/4]&4)) igFlattenHierarchy_arkRegister();
 return igFlattenHierarchy_meta;
}
void *igFlattenHierarchy_vtableRead(){
 UnknownGenObject80148B64 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igFlattenHierarchy_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igFlattenHierarchy_arkRegister(){
 meta_registerNow((int)igFlattenHierarchy_register);
}
void igFlattenHierarchy_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igFlattenHierarchy_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igFlattenHierarchy_getMetaCall,(int)igFlattenHierarchy_className,48,(int)igFlattenHierarchy_vtableRead,(int)igFlattenHierarchy_fieldInit,0,0);
}
void *igFlattenHierarchy_getMetaCall(){return igFlattenHierarchy_getMeta();}
}
#pragma pop
