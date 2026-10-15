#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013496C();
void *fn_80148B20();
void igCollapseNode_fieldInit();
void igItemBase_register();
void igOptVisitObject_register();
extern char igCombineTransforms_className[];
extern char igCollapseNodeForCompiledGraph_className[];
extern char igCollapseNodeForMultitextureShader_className[];
extern char igCollapseNodeForModelViewMatrixBoneSelect_className[];
extern char igCollapseNodeForMorphInstance_className[];
extern char igCollapseNodeForAttrSet_className[];
extern char igCollapseNodeForLightSet_className[];
extern char igCollapseNodeForLightStateSet_className[];
extern char igCollapseNodeForGeometry_className[];
extern char igCollapseNodeForLod_className[];
extern char igCollapseNodeForUserInfo_className[];
extern char igCollapseNodeForGroup_className[];
extern char igCollapseNodeForTransform_className[];
extern char igCollapseNodeForNode_className[];
extern char igCollapseNode_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igCombineTransforms_vtable[];
extern char igCollapseNodeForCompiledGraph_vtable[];
extern char igCollapseNodeForMultitextureShader_vtable[];
extern char igCollapseNodeForModelViewMatrixBoneSelect_vtable[];
extern char igCollapseNodeForMorphInstance_vtable[];
extern char igCollapseNodeForAttrSet_vtable[];
extern char igCollapseNodeForLightSet_vtable[];
extern char igCollapseNodeForLightStateSet_vtable[];
extern char igCollapseNodeForGeometry_vtable[];
extern char igCollapseNodeForLod_vtable[];
extern char igCollapseNodeForUserInfo_vtable[];
extern char igCollapseNodeForGroup_vtable[];
extern char igCollapseNodeForTransform_vtable[];
extern char igCollapseNodeForNode_vtable[];
extern char lbl_804A8050[];
extern char lbl_804AAF48[];
extern char igCombineTransforms_fieldTypes[8];
extern char igCombineTransforms_fieldNames[8];
extern char igCombineTransforms_fieldStorage[8];
extern char igCombineTransforms_fieldOffsets[8];
extern char igCollapseNode_dependencies[8];
extern void *igCombineTransforms_meta;
extern void *igCollapseNodeForCompiledGraph_meta;
extern void *igCollapseNodeForMultitextureShader_meta;
extern void *igCollapseNodeForModelViewMatrixBoneSelect_meta;
extern void *igCollapseNodeForMorphInstance_meta;
extern void *igCollapseNodeForAttrSet_meta;
extern void *igCollapseNodeForLightSet_meta;
extern void *igCollapseNodeForLightStateSet_meta;
extern void *igCollapseNodeForGeometry_meta;
extern void *igCollapseNodeForLod_meta;
extern void *igCollapseNodeForUserInfo_meta;
extern void *igCollapseNodeForGroup_meta;
extern void *igCollapseNodeForTransform_meta;
extern void *igCollapseNodeForNode_meta;
extern void *igCollapseNode_meta;
extern char lbl_80566B14[4];
void *igCombineTransforms_getMeta();
void *igCombineTransforms_vtableRead();
void igCombineTransforms_arkRegister();
void igCombineTransforms_register();
void *igCombineTransforms_getMetaCall();
void igCombineTransforms_fieldInit();
void *igCollapseNodeForCompiledGraph_getMeta();
void *igCollapseNodeForCompiledGraph_vtableRead();
void igCollapseNodeForCompiledGraph_arkRegister();
void igCollapseNodeForCompiledGraph_register();
void *igCollapseNodeForCompiledGraph_getMetaCall();
void *igCollapseNodeForMultitextureShader_getMeta();
void *igCollapseNodeForMultitextureShader_vtableRead();
void igCollapseNodeForMultitextureShader_arkRegister();
void igCollapseNodeForMultitextureShader_register();
void *igCollapseNodeForMultitextureShader_getMetaCall();
void *igCollapseNodeForModelViewMatrixBoneSelect_getMeta();
void *igCollapseNodeForModelViewMatrixBoneSelect_vtableRead();
void igCollapseNodeForModelViewMatrixBoneSelect_arkRegister();
void igCollapseNodeForModelViewMatrixBoneSelect_register();
void *igCollapseNodeForModelViewMatrixBoneSelect_getMetaCall();
void *igCollapseNodeForMorphInstance_getMeta();
void *igCollapseNodeForMorphInstance_vtableRead();
void igCollapseNodeForMorphInstance_arkRegister();
void igCollapseNodeForMorphInstance_register();
void *igCollapseNodeForMorphInstance_getMetaCall();
void *igCollapseNodeForAttrSet_getMeta();
void *igCollapseNodeForAttrSet_vtableRead();
void igCollapseNodeForAttrSet_arkRegister();
void igCollapseNodeForAttrSet_register();
void *igCollapseNodeForAttrSet_getMetaCall();
void *igCollapseNodeForLightSet_getMeta();
void *igCollapseNodeForLightSet_vtableRead();
void igCollapseNodeForLightSet_arkRegister();
void igCollapseNodeForLightSet_register();
void *igCollapseNodeForLightSet_getMetaCall();
void *igCollapseNodeForLightStateSet_getMeta();
void *igCollapseNodeForLightStateSet_vtableRead();
void igCollapseNodeForLightStateSet_arkRegister();
void igCollapseNodeForLightStateSet_register();
void *igCollapseNodeForLightStateSet_getMetaCall();
void *igCollapseNodeForGeometry_getMeta();
void *igCollapseNodeForGeometry_vtableRead();
void igCollapseNodeForGeometry_arkRegister();
void igCollapseNodeForGeometry_register();
void *igCollapseNodeForGeometry_getMetaCall();
void *igCollapseNodeForLod_getMeta();
void *igCollapseNodeForLod_vtableRead();
void igCollapseNodeForLod_arkRegister();
void igCollapseNodeForLod_register();
void *igCollapseNodeForLod_getMetaCall();
void *igCollapseNodeForUserInfo_getMeta();
void *igCollapseNodeForUserInfo_vtableRead();
void igCollapseNodeForUserInfo_arkRegister();
void igCollapseNodeForUserInfo_register();
void *igCollapseNodeForUserInfo_getMetaCall();
void *igCollapseNodeForGroup_getMeta();
void *igCollapseNodeForGroup_vtableRead();
void igCollapseNodeForGroup_arkRegister();
void igCollapseNodeForGroup_register();
void *igCollapseNodeForGroup_getMetaCall();
void *igCollapseNodeForTransform_getMeta();
void *igCollapseNodeForTransform_vtableRead();
void igCollapseNodeForTransform_arkRegister();
void igCollapseNodeForTransform_register();
void *igCollapseNodeForTransform_getMetaCall();
void *igCollapseNodeForNode_getMeta();
void *igCollapseNodeForNode_vtableRead();
void igCollapseNodeForNode_arkRegister();
void igCollapseNodeForNode_register();
void *igCollapseNodeForNode_getMetaCall();
void *igCollapseNode_getMeta();
void igCollapseNode_arkRegister();
void igCollapseNode_register();
void *igCollapseNode_getMetaCall();
}
struct UnknownGenRoot8014F4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F4AC(){igObject_construct(this);}
};
struct UnknownGenObject8014F4AC_0 : UnknownGenRoot8014F4AC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F4AC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014F4AC_1 : UnknownGenObject8014F4AC_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014F4AC_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014F4AC : UnknownGenObject8014F4AC_1 {
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014F4AC(){unknown00=igCombineTransforms_vtable;}
};
struct UnknownGenRoot8014F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F79C(){igObject_construct(this);}
};
struct UnknownGenObject8014F79C_0 : UnknownGenRoot8014F79C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F79C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014F79C : UnknownGenObject8014F79C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014F79C(){unknown00=igCollapseNodeForCompiledGraph_vtable;}
};
struct UnknownGenRoot8014F984 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F984(){igObject_construct(this);}
};
struct UnknownGenObject8014F984_0 : UnknownGenRoot8014F984 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F984_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014F984 : UnknownGenObject8014F984_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014F984(){unknown00=igCollapseNodeForMultitextureShader_vtable;}
};
struct UnknownGenRoot8014FB6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014FB6C(){igObject_construct(this);}
};
struct UnknownGenObject8014FB6C_0 : UnknownGenRoot8014FB6C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014FB6C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014FB6C : UnknownGenObject8014FB6C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014FB6C(){unknown00=igCollapseNodeForModelViewMatrixBoneSelect_vtable;}
};
struct UnknownGenRoot8014FD54 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014FD54(){igObject_construct(this);}
};
struct UnknownGenObject8014FD54_0 : UnknownGenRoot8014FD54 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014FD54_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014FD54 : UnknownGenObject8014FD54_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014FD54(){unknown00=igCollapseNodeForMorphInstance_vtable;}
};
struct UnknownGenRoot8014FF3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014FF3C(){igObject_construct(this);}
};
struct UnknownGenObject8014FF3C_0 : UnknownGenRoot8014FF3C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014FF3C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8014FF3C : UnknownGenObject8014FF3C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014FF3C(){unknown00=igCollapseNodeForAttrSet_vtable;}
};
struct UnknownGenRoot80150124 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80150124(){igObject_construct(this);}
};
struct UnknownGenObject80150124_0 : UnknownGenRoot80150124 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80150124_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80150124 : UnknownGenObject80150124_0 {
 char unknown28[8];
 inline ~UnknownGenObject80150124(){unknown00=igCollapseNodeForLightSet_vtable;}
};
struct UnknownGenRoot8015030C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015030C(){igObject_construct(this);}
};
struct UnknownGenObject8015030C_0 : UnknownGenRoot8015030C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8015030C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject8015030C : UnknownGenObject8015030C_0 {
 char unknown28[8];
 inline ~UnknownGenObject8015030C(){unknown00=igCollapseNodeForLightStateSet_vtable;}
};
struct UnknownGenRoot801504F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801504F4(){igObject_construct(this);}
};
struct UnknownGenObject801504F4_0 : UnknownGenRoot801504F4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801504F4_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject801504F4 : UnknownGenObject801504F4_0 {
 char unknown28[8];
 inline ~UnknownGenObject801504F4(){unknown00=igCollapseNodeForGeometry_vtable;}
};
struct UnknownGenRoot801506DC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801506DC(){igObject_construct(this);}
};
struct UnknownGenObject801506DC_0 : UnknownGenRoot801506DC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801506DC_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject801506DC : UnknownGenObject801506DC_0 {
 char unknown28[8];
 inline ~UnknownGenObject801506DC(){unknown00=igCollapseNodeForLod_vtable;}
};
struct UnknownGenRoot801508C4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801508C4(){igObject_construct(this);}
};
struct UnknownGenObject801508C4_0 : UnknownGenRoot801508C4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801508C4_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject801508C4 : UnknownGenObject801508C4_0 {
 char unknown28[8];
 inline ~UnknownGenObject801508C4(){unknown00=igCollapseNodeForUserInfo_vtable;}
};
struct UnknownGenRoot80150AAC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80150AAC(){igObject_construct(this);}
};
struct UnknownGenObject80150AAC_0 : UnknownGenRoot80150AAC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80150AAC_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80150AAC : UnknownGenObject80150AAC_0 {
 char unknown28[8];
 inline ~UnknownGenObject80150AAC(){unknown00=igCollapseNodeForGroup_vtable;}
};
struct UnknownGenRoot80150C94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80150C94(){igObject_construct(this);}
};
struct UnknownGenObject80150C94_0 : UnknownGenRoot80150C94 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80150C94_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80150C94 : UnknownGenObject80150C94_0 {
 char unknown28[8];
 inline ~UnknownGenObject80150C94(){unknown00=igCollapseNodeForTransform_vtable;}
};
struct UnknownGenRoot80150E7C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80150E7C(){igObject_construct(this);}
};
struct UnknownGenObject80150E7C_0 : UnknownGenRoot80150E7C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80150E7C_0(){unknown00=lbl_804A8050;}
};
struct UnknownGenObject80150E7C : UnknownGenObject80150E7C_0 {
 char unknown28[8];
 inline ~UnknownGenObject80150E7C(){unknown00=igCollapseNodeForNode_vtable;}
};
extern "C" {
void *igCombineTransforms_getMeta(){
 if(!igCombineTransforms_meta || !(reinterpret_cast<unsigned int *>(igCombineTransforms_meta)[0x24/4]&4)) igCombineTransforms_arkRegister();
 return igCombineTransforms_meta;
}
void *igCombineTransforms_vtableRead(){
 UnknownGenObject8014F4AC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igCombineTransforms_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCombineTransforms_arkRegister(){
 meta_registerNow((int)igCombineTransforms_register);
}
void igCombineTransforms_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCombineTransforms_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igCombineTransforms_getMetaCall,(int)igCombineTransforms_className,52,(int)igCombineTransforms_vtableRead,(int)igCombineTransforms_fieldInit,0,0);
}
void *igCombineTransforms_getMetaCall(){return igCombineTransforms_getMeta();}
void igCombineTransforms_fieldInit(){
 void *value0=igCombineTransforms_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igCombineTransforms_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566B14+0)));
 meta_setupFields(value0,igCombineTransforms_fieldNames,igCombineTransforms_fieldStorage,igCombineTransforms_fieldOffsets,value1);
}
void *igCollapseNodeForCompiledGraph_getMeta(){
 if(!igCollapseNodeForCompiledGraph_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForCompiledGraph_meta)[0x24/4]&4)) igCollapseNodeForCompiledGraph_arkRegister();
 return igCollapseNodeForCompiledGraph_meta;
}
void *igCollapseNodeForCompiledGraph_vtableRead(){
 UnknownGenObject8014F79C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForCompiledGraph_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForCompiledGraph_arkRegister(){
 meta_registerNow((int)igCollapseNodeForCompiledGraph_register);
}
void igCollapseNodeForCompiledGraph_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForCompiledGraph_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForCompiledGraph_getMetaCall,(int)igCollapseNodeForCompiledGraph_className,44,(int)igCollapseNodeForCompiledGraph_vtableRead,0,0,0);
}
void *igCollapseNodeForCompiledGraph_getMetaCall(){return igCollapseNodeForCompiledGraph_getMeta();}
void *igCollapseNodeForMultitextureShader_getMeta(){
 if(!igCollapseNodeForMultitextureShader_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForMultitextureShader_meta)[0x24/4]&4)) igCollapseNodeForMultitextureShader_arkRegister();
 return igCollapseNodeForMultitextureShader_meta;
}
void *igCollapseNodeForMultitextureShader_vtableRead(){
 UnknownGenObject8014F984 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForMultitextureShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForMultitextureShader_arkRegister(){
 meta_registerNow((int)igCollapseNodeForMultitextureShader_register);
}
void igCollapseNodeForMultitextureShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForMultitextureShader_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForMultitextureShader_getMetaCall,(int)igCollapseNodeForMultitextureShader_className,44,(int)igCollapseNodeForMultitextureShader_vtableRead,0,0,0);
}
void *igCollapseNodeForMultitextureShader_getMetaCall(){return igCollapseNodeForMultitextureShader_getMeta();}
void *igCollapseNodeForModelViewMatrixBoneSelect_getMeta(){
 if(!igCollapseNodeForModelViewMatrixBoneSelect_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForModelViewMatrixBoneSelect_meta)[0x24/4]&4)) igCollapseNodeForModelViewMatrixBoneSelect_arkRegister();
 return igCollapseNodeForModelViewMatrixBoneSelect_meta;
}
void *igCollapseNodeForModelViewMatrixBoneSelect_vtableRead(){
 UnknownGenObject8014FB6C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForModelViewMatrixBoneSelect_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForModelViewMatrixBoneSelect_arkRegister(){
 meta_registerNow((int)igCollapseNodeForModelViewMatrixBoneSelect_register);
}
void igCollapseNodeForModelViewMatrixBoneSelect_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForModelViewMatrixBoneSelect_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForModelViewMatrixBoneSelect_getMetaCall,(int)igCollapseNodeForModelViewMatrixBoneSelect_className,44,(int)igCollapseNodeForModelViewMatrixBoneSelect_vtableRead,0,0,0);
}
void *igCollapseNodeForModelViewMatrixBoneSelect_getMetaCall(){return igCollapseNodeForModelViewMatrixBoneSelect_getMeta();}
void *igCollapseNodeForMorphInstance_getMeta(){
 if(!igCollapseNodeForMorphInstance_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForMorphInstance_meta)[0x24/4]&4)) igCollapseNodeForMorphInstance_arkRegister();
 return igCollapseNodeForMorphInstance_meta;
}
void *igCollapseNodeForMorphInstance_vtableRead(){
 UnknownGenObject8014FD54 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForMorphInstance_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForMorphInstance_arkRegister(){
 meta_registerNow((int)igCollapseNodeForMorphInstance_register);
}
void igCollapseNodeForMorphInstance_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForMorphInstance_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForMorphInstance_getMetaCall,(int)igCollapseNodeForMorphInstance_className,44,(int)igCollapseNodeForMorphInstance_vtableRead,0,0,0);
}
void *igCollapseNodeForMorphInstance_getMetaCall(){return igCollapseNodeForMorphInstance_getMeta();}
void *igCollapseNodeForAttrSet_getMeta(){
 if(!igCollapseNodeForAttrSet_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForAttrSet_meta)[0x24/4]&4)) igCollapseNodeForAttrSet_arkRegister();
 return igCollapseNodeForAttrSet_meta;
}
void *igCollapseNodeForAttrSet_vtableRead(){
 UnknownGenObject8014FF3C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForAttrSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForAttrSet_arkRegister(){
 meta_registerNow((int)igCollapseNodeForAttrSet_register);
}
void igCollapseNodeForAttrSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForAttrSet_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForAttrSet_getMetaCall,(int)igCollapseNodeForAttrSet_className,44,(int)igCollapseNodeForAttrSet_vtableRead,0,0,0);
}
void *igCollapseNodeForAttrSet_getMetaCall(){return igCollapseNodeForAttrSet_getMeta();}
void *igCollapseNodeForLightSet_getMeta(){
 if(!igCollapseNodeForLightSet_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForLightSet_meta)[0x24/4]&4)) igCollapseNodeForLightSet_arkRegister();
 return igCollapseNodeForLightSet_meta;
}
void *igCollapseNodeForLightSet_vtableRead(){
 UnknownGenObject80150124 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForLightSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForLightSet_arkRegister(){
 meta_registerNow((int)igCollapseNodeForLightSet_register);
}
void igCollapseNodeForLightSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForLightSet_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForLightSet_getMetaCall,(int)igCollapseNodeForLightSet_className,44,(int)igCollapseNodeForLightSet_vtableRead,0,0,0);
}
void *igCollapseNodeForLightSet_getMetaCall(){return igCollapseNodeForLightSet_getMeta();}
void *igCollapseNodeForLightStateSet_getMeta(){
 if(!igCollapseNodeForLightStateSet_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForLightStateSet_meta)[0x24/4]&4)) igCollapseNodeForLightStateSet_arkRegister();
 return igCollapseNodeForLightStateSet_meta;
}
void *igCollapseNodeForLightStateSet_vtableRead(){
 UnknownGenObject8015030C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForLightStateSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForLightStateSet_arkRegister(){
 meta_registerNow((int)igCollapseNodeForLightStateSet_register);
}
void igCollapseNodeForLightStateSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForLightStateSet_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForLightStateSet_getMetaCall,(int)igCollapseNodeForLightStateSet_className,44,(int)igCollapseNodeForLightStateSet_vtableRead,0,0,0);
}
void *igCollapseNodeForLightStateSet_getMetaCall(){return igCollapseNodeForLightStateSet_getMeta();}
void *igCollapseNodeForGeometry_getMeta(){
 if(!igCollapseNodeForGeometry_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForGeometry_meta)[0x24/4]&4)) igCollapseNodeForGeometry_arkRegister();
 return igCollapseNodeForGeometry_meta;
}
void *igCollapseNodeForGeometry_vtableRead(){
 UnknownGenObject801504F4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForGeometry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForGeometry_arkRegister(){
 meta_registerNow((int)igCollapseNodeForGeometry_register);
}
void igCollapseNodeForGeometry_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForGeometry_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForGeometry_getMetaCall,(int)igCollapseNodeForGeometry_className,44,(int)igCollapseNodeForGeometry_vtableRead,0,0,0);
}
void *igCollapseNodeForGeometry_getMetaCall(){return igCollapseNodeForGeometry_getMeta();}
void *igCollapseNodeForLod_getMeta(){
 if(!igCollapseNodeForLod_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForLod_meta)[0x24/4]&4)) igCollapseNodeForLod_arkRegister();
 return igCollapseNodeForLod_meta;
}
void *igCollapseNodeForLod_vtableRead(){
 UnknownGenObject801506DC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForLod_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForLod_arkRegister(){
 meta_registerNow((int)igCollapseNodeForLod_register);
}
void igCollapseNodeForLod_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForLod_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForLod_getMetaCall,(int)igCollapseNodeForLod_className,44,(int)igCollapseNodeForLod_vtableRead,0,0,0);
}
void *igCollapseNodeForLod_getMetaCall(){return igCollapseNodeForLod_getMeta();}
void *igCollapseNodeForUserInfo_getMeta(){
 if(!igCollapseNodeForUserInfo_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForUserInfo_meta)[0x24/4]&4)) igCollapseNodeForUserInfo_arkRegister();
 return igCollapseNodeForUserInfo_meta;
}
void *igCollapseNodeForUserInfo_vtableRead(){
 UnknownGenObject801508C4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForUserInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForUserInfo_arkRegister(){
 meta_registerNow((int)igCollapseNodeForUserInfo_register);
}
void igCollapseNodeForUserInfo_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForUserInfo_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForUserInfo_getMetaCall,(int)igCollapseNodeForUserInfo_className,44,(int)igCollapseNodeForUserInfo_vtableRead,0,0,0);
}
void *igCollapseNodeForUserInfo_getMetaCall(){return igCollapseNodeForUserInfo_getMeta();}
void *igCollapseNodeForGroup_getMeta(){
 if(!igCollapseNodeForGroup_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForGroup_meta)[0x24/4]&4)) igCollapseNodeForGroup_arkRegister();
 return igCollapseNodeForGroup_meta;
}
void *igCollapseNodeForGroup_vtableRead(){
 UnknownGenObject80150AAC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForGroup_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForGroup_arkRegister(){
 meta_registerNow((int)igCollapseNodeForGroup_register);
}
void igCollapseNodeForGroup_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForGroup_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForGroup_getMetaCall,(int)igCollapseNodeForGroup_className,44,(int)igCollapseNodeForGroup_vtableRead,0,0,0);
}
void *igCollapseNodeForGroup_getMetaCall(){return igCollapseNodeForGroup_getMeta();}
void *igCollapseNodeForTransform_getMeta(){
 if(!igCollapseNodeForTransform_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForTransform_meta)[0x24/4]&4)) igCollapseNodeForTransform_arkRegister();
 return igCollapseNodeForTransform_meta;
}
void *igCollapseNodeForTransform_vtableRead(){
 UnknownGenObject80150C94 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForTransform_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForTransform_arkRegister(){
 meta_registerNow((int)igCollapseNodeForTransform_register);
}
void igCollapseNodeForTransform_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForTransform_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForTransform_getMetaCall,(int)igCollapseNodeForTransform_className,44,(int)igCollapseNodeForTransform_vtableRead,0,0,0);
}
void *igCollapseNodeForTransform_getMetaCall(){return igCollapseNodeForTransform_getMeta();}
void *igCollapseNodeForNode_getMeta(){
 if(!igCollapseNodeForNode_meta || !(reinterpret_cast<unsigned int *>(igCollapseNodeForNode_meta)[0x24/4]&4)) igCollapseNodeForNode_arkRegister();
 return igCollapseNodeForNode_meta;
}
void *igCollapseNodeForNode_vtableRead(){
 UnknownGenObject80150E7C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A8050;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseNodeForNode_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseNodeForNode_arkRegister(){
 meta_registerNow((int)igCollapseNodeForNode_register);
}
void igCollapseNodeForNode_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseNodeForNode_meta,(int)igCollapseNode_register,(int)fn_80148B20,(int)igCollapseNodeForNode_getMetaCall,(int)igCollapseNodeForNode_className,44,(int)igCollapseNodeForNode_vtableRead,0,0,0);
}
void *igCollapseNodeForNode_getMetaCall(){return igCollapseNodeForNode_getMeta();}
void *igCollapseNode_getMeta(){
 if(!igCollapseNode_meta || !(reinterpret_cast<unsigned int *>(igCollapseNode_meta)[0x24/4]&4)) igCollapseNode_arkRegister();
 return igCollapseNode_meta;
}
void igCollapseNode_arkRegister(){
 meta_registerNow((int)igCollapseNode_register);
}
void igCollapseNode_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igCollapseNode_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igCollapseNode_getMetaCall,(int)igCollapseNode_className,44,0,(int)igCollapseNode_fieldInit,0,(int)igCollapseNode_dependencies);
}
void *igCollapseNode_getMetaCall(){return igCollapseNode_getMeta();}
}
#pragma pop
