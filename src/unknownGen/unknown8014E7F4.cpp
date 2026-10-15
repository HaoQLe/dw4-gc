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
extern char lbl_8055FC30[8];
extern char lbl_8055FC38[8];
extern char lbl_8055FC40[8];
extern char lbl_8055FC48[8];
extern char lbl_8055FC50[8];
extern char lbl_8055FC60[8];
extern char lbl_8055FC68[8];
extern char lbl_8055FC70[8];
extern char lbl_8055FC78[8];
extern char lbl_8055FC80[4];
extern char lbl_8055FC84[8];
extern void *igConvertAnimationsToCompressedSequencesQS_meta;
extern void *lbl_80564478;
extern void *igCompileGraph_meta;
extern void *igCompileActorSkins_meta;
extern void *igCompareAttrForTexture_meta;
extern void *igCompareAttr_meta;
void *igConvertAnimationsToCompressedSequencesQS_getMeta();
void *igConvertAnimationsToCompressedSequencesQS_vtableRead();
void igConvertAnimationsToCompressedSequencesQS_registerNow();
void igConvertAnimationsToCompressedSequencesQS_register();
void *igConvertAnimationsToCompressedSequencesQS_getMetaCall();
void igConvertAnimationsToCompressedSequencesQS_fieldInit();
void *fn_8014EB10();
void *igCompileGraph_getMeta();
void *igCompileGraph_vtableRead();
void igCompileGraph_registerNow();
void igCompileGraph_register();
void *igCompileGraph_getMetaCall();
void igCompileGraph_fieldInit();
void *igCompileActorSkins_getMeta();
void *igCompileActorSkins_vtableRead();
void igCompileActorSkins_registerNow();
void igCompileActorSkins_register();
void *igCompileActorSkins_getMetaCall();
void *igCompareAttrForTexture_getMeta();
void *igCompareAttrForTexture_vtableRead();
void igCompareAttrForTexture_registerNow();
void igCompareAttrForTexture_register();
void *igCompareAttrForTexture_getMetaCall();
void *igCompareAttrForTexture_parentMeta();
void *igCompareAttr_getMeta();
void *igCompareAttr_vtableRead();
void igCompareAttr_registerNow();
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
void *igConvertAnimationsToCompressedSequencesQS_getMeta(){
 if(!igConvertAnimationsToCompressedSequencesQS_meta || !(reinterpret_cast<unsigned int *>(igConvertAnimationsToCompressedSequencesQS_meta)[0x24/4]&4)) igConvertAnimationsToCompressedSequencesQS_registerNow();
 return igConvertAnimationsToCompressedSequencesQS_meta;
}
void *igConvertAnimationsToCompressedSequencesQS_vtableRead(){
 UnknownGenObject8014E830 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=igConvertAnimationsToCompressedSequencesQS_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igConvertAnimationsToCompressedSequencesQS_registerNow(){
 meta_registerNow((int)igConvertAnimationsToCompressedSequencesQS_register);
}
void igConvertAnimationsToCompressedSequencesQS_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igConvertAnimationsToCompressedSequencesQS_meta,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igConvertAnimationsToCompressedSequencesQS_getMetaCall,(int)igConvertAnimationsToCompressedSequencesQS_className,52,(int)igConvertAnimationsToCompressedSequencesQS_vtableRead,(int)igConvertAnimationsToCompressedSequencesQS_fieldInit,0,(int)lbl_8055FC30);
}
void *igConvertAnimationsToCompressedSequencesQS_getMetaCall(){return igConvertAnimationsToCompressedSequencesQS_getMeta();}
void igConvertAnimationsToCompressedSequencesQS_fieldInit(){
 void *value0=igConvertAnimationsToCompressedSequencesQS_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055FC38,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80035694();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 meta_setupFields(value0,lbl_8055FC40,lbl_8055FC48,lbl_8055FC50,value1);
}
void *fn_8014EB10(){
 char *data=igVertexBlending_className;
 if(!lbl_80564478) lbl_80564478=fn_800635C8(data+0x3FF8,data+0x3FE0,data+0x3FEC,0x3);
 return lbl_80564478;
}
void *igCompileGraph_getMeta(){
 if(!igCompileGraph_meta || !(reinterpret_cast<unsigned int *>(igCompileGraph_meta)[0x24/4]&4)) igCompileGraph_registerNow();
 return igCompileGraph_meta;
}
void *igCompileGraph_vtableRead(){
 UnknownGenObject8014EB98 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCompileGraph_vtable;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompileGraph_registerNow(){
 meta_registerNow((int)igCompileGraph_register);
}
void igCompileGraph_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCompileGraph_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCompileGraph_getMetaCall,(int)igCompileGraph_className,48,(int)igCompileGraph_vtableRead,(int)igCompileGraph_fieldInit,0,0);
}
void *igCompileGraph_getMetaCall(){return igCompileGraph_getMeta();}
void igCompileGraph_fieldInit(){
 void *value0=igCompileGraph_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055FC60,2);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055FC80);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_8014EB10;
 meta_setupFields(value0,lbl_8055FC68,lbl_8055FC70,lbl_8055FC78,value1);
}
void *igCompileActorSkins_getMeta(){
 if(!igCompileActorSkins_meta || !(reinterpret_cast<unsigned int *>(igCompileActorSkins_meta)[0x24/4]&4)) igCompileActorSkins_registerNow();
 return igCompileActorSkins_meta;
}
void *igCompileActorSkins_vtableRead(){
 UnknownGenObject8014EE48 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCompileActorSkins_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompileActorSkins_registerNow(){
 meta_registerNow((int)igCompileActorSkins_register);
}
void igCompileActorSkins_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCompileActorSkins_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCompileActorSkins_getMetaCall,(int)igCompileActorSkins_className,40,(int)igCompileActorSkins_vtableRead,0,0,0);
}
void *igCompileActorSkins_getMetaCall(){return igCompileActorSkins_getMeta();}
void *igCompareAttrForTexture_getMeta(){
 if(!igCompareAttrForTexture_meta || !(reinterpret_cast<unsigned int *>(igCompareAttrForTexture_meta)[0x24/4]&4)) igCompareAttrForTexture_registerNow();
 return igCompareAttrForTexture_meta;
}
void *igCompareAttrForTexture_vtableRead(){
 UnknownGenObject8014F024 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=igCompareAttr_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCompareAttrForTexture_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompareAttrForTexture_registerNow(){
 meta_registerNow((int)igCompareAttrForTexture_register);
}
void igCompareAttrForTexture_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCompareAttrForTexture_meta,(int)igCompareAttr_register,(int)igCompareAttrForTexture_parentMeta,(int)igCompareAttrForTexture_getMetaCall,(int)igCompareAttrForTexture_className,44,(int)igCompareAttrForTexture_vtableRead,0,0,0);
}
void *igCompareAttrForTexture_getMetaCall(){return igCompareAttrForTexture_getMeta();}
void *igCompareAttrForTexture_parentMeta(){return igCompareAttr_meta;}
void *igCompareAttr_getMeta(){
 if(!igCompareAttr_meta || !(reinterpret_cast<unsigned int *>(igCompareAttr_meta)[0x24/4]&4)) igCompareAttr_registerNow();
 return igCompareAttr_meta;
}
void *igCompareAttr_vtableRead(){
 UnknownGenObject8014F214 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=igCompareAttr_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompareAttr_registerNow(){
 meta_registerNow((int)igCompareAttr_register);
}
void igCompareAttr_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCompareAttr_meta,(int)igItemBase_register,(int)fn_8013496C,(int)igCompareAttr_getMetaCall,(int)igCompareAttr_className,44,(int)igCompareAttr_vtableRead,(int)igCompareAttr_fieldInit,0,(int)lbl_8055FC84);
}
void *igCompareAttr_getMetaCall(){return igCompareAttr_getMeta();}
}
#pragma pop
