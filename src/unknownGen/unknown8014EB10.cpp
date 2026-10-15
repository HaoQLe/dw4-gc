#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80035694();
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_801308D0();
void *fn_8013496C();
void igCompareAttr_fieldInit();
void igItemBase_register();
void igOptBase_register();
void igOptVisitObject_register();
extern char igVertexBlending_className[];
extern char igConvertAnimationsToCompressedSequencesQS_className[];
extern char igCompileGraph_className[];
extern char igCompileActorSkins_className[];
extern char igCompareAttrForTexture_className[];
extern char igCompareAttr_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igConvertAnimationsToCompressedSequencesQS_vtable[];
extern char igCompileGraph_vtable[];
extern char igCompileActorSkins_vtable[];
extern char igCompareAttrForTexture_vtable[];
extern char igCompareAttr_vtable[];
extern char lbl_804AAF48[];
extern char igConvertAnimationsToCompressedSequencesQS_dependencies[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldTypes[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldNames[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldStorage[8];
extern char igConvertAnimationsToCompressedSequencesQS_fieldOffsets[8];
extern char igCompileGraph_fieldTypes[8];
extern char igCompileGraph_fieldNames[8];
extern char igCompileGraph_fieldStorage[8];
extern char igCompileGraph_fieldOffsets[8];
extern char lbl_8055FC80[4];
extern char igCompareAttr_dependencies[8];
extern void *igConvertAnimationsToCompressedSequencesQS_meta;
extern void *lbl_80564478;
extern void *igCompileGraph_meta;
extern void *igCompileActorSkins_meta;
extern void *igCompareAttrForTexture_meta;
extern void *igCompareAttr_meta;
void *igConvertAnimationsToCompressedSequencesQS_getMeta();
void *igConvertAnimationsToCompressedSequencesQS_vtableRead();
void igConvertAnimationsToCompressedSequencesQS_arkRegister();
void igConvertAnimationsToCompressedSequencesQS_register();
void *igConvertAnimationsToCompressedSequencesQS_getMetaCall();
void igConvertAnimationsToCompressedSequencesQS_fieldInit();
void *fn_8014EB10();
void *igCompileGraph_getMeta();
void *igCompileGraph_vtableRead();
void igCompileGraph_arkRegister();
void igCompileGraph_register();
void *igCompileGraph_getMetaCall();
void igCompileGraph_fieldInit();
void *igCompileActorSkins_getMeta();
void *igCompileActorSkins_vtableRead();
void igCompileActorSkins_arkRegister();
void igCompileActorSkins_register();
void *igCompileActorSkins_getMetaCall();
void *igCompareAttrForTexture_getMeta();
void *igCompareAttrForTexture_vtableRead();
void igCompareAttrForTexture_arkRegister();
void igCompareAttrForTexture_register();
void *igCompareAttrForTexture_getMetaCall();
void *igCompareAttrForTexture_parentMeta();
void *igCompareAttr_getMeta();
void *igCompareAttr_vtableRead();
void igCompareAttr_arkRegister();
void igCompareAttr_register();
void *igCompareAttr_getMetaCall();
}
struct UnknownGenRoot8014E830 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014E830(){igObject_construct(this);}
};
struct UnknownGenObject8014E830_0 : UnknownGenRoot8014E830 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014E830_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014E830_1 : UnknownGenObject8014E830_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014E830_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014E830 : UnknownGenObject8014E830_1 {
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014E830(){unknown00=igConvertAnimationsToCompressedSequencesQS_vtable;}
};
struct UnknownGenRoot8014EB98 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014EB98(){igObject_construct(this);}
};
struct UnknownGenObject8014EB98_0 : UnknownGenRoot8014EB98 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014EB98_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014EB98 : UnknownGenObject8014EB98_0 {
 char unknown28[4];
 UnknownGenString unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014EB98(){unknown00=igCompileGraph_vtable;}
};
struct UnknownGenRoot8014EE48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014EE48(){igObject_construct(this);}
};
struct UnknownGenObject8014EE48_0 : UnknownGenRoot8014EE48 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014EE48_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014EE48 : UnknownGenObject8014EE48_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014EE48(){unknown00=igCompileActorSkins_vtable;}
};
struct UnknownGenRoot8014F024 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F024(){igObject_construct(this);}
};
struct UnknownGenObject8014F024_0 : UnknownGenRoot8014F024 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014F024_0(){unknown00=igCompareAttr_vtable;}
};
struct UnknownGenObject8014F024 : UnknownGenObject8014F024_0 {
 char unknown28[8];
 inline ~UnknownGenObject8014F024(){unknown00=igCompareAttrForTexture_vtable;}
};
struct UnknownGenRoot8014F214 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014F214(){igObject_construct(this);}
};
struct UnknownGenObject8014F214 : UnknownGenRoot8014F214 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8014F214(){unknown00=igCompareAttr_vtable;}
};
extern "C" {
void *fn_8014EB10(){
 char *data=igVertexBlending_className;
 if(!lbl_80564478) lbl_80564478=fn_800635C8(data+0x3FF8,data+0x3FE0,data+0x3FEC,0x3);
 return lbl_80564478;
}
}
#pragma pop
