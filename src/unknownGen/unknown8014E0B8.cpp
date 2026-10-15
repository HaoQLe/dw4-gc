#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80035694();
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013AFE4();
void igConvertTransform_fieldInit();
void igOptTraverseGraph_register();
void igOptVisitObject_register();
extern char igConvertTransformsToCompressedSequencesQS_className[];
extern char igConvertTransform_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igConvertTransformsToCompressedSequencesQS_vtable[];
extern char igConvertTransform_vtable[];
extern char lbl_804AAF48[];
extern char igConvertTransformsToCompressedSequencesQS_dependencies[8];
extern char igConvertTransformsToCompressedSequencesQS_fieldTypes[8];
extern char igConvertTransformsToCompressedSequencesQS_fieldNames[8];
extern char igConvertTransformsToCompressedSequencesQS_fieldStorage[8];
extern char igConvertTransformsToCompressedSequencesQS_fieldOffsets[8];
extern void *igConvertTransformsToCompressedSequencesQS_meta;
extern void *igConvertTransform_meta;
void *igConvertTransformsToCompressedSequencesQS_getMeta();
void *igConvertTransformsToCompressedSequencesQS_vtableRead();
void igConvertTransformsToCompressedSequencesQS_arkRegister();
void igConvertTransformsToCompressedSequencesQS_register();
void *igConvertTransformsToCompressedSequencesQS_getMetaCall();
void igConvertTransformsToCompressedSequencesQS_fieldInit();
void *igConvertTransform_getMeta();
void *igConvertTransform_vtableRead();
void igConvertTransform_arkRegister();
void igConvertTransform_register();
void *igConvertTransform_getMetaCall();
}
struct UnknownGenRoot8014DDD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014DDD8(){igObject_construct(this);}
};
struct UnknownGenObject8014DDD8_0 : UnknownGenRoot8014DDD8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014DDD8_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014DDD8_1 : UnknownGenObject8014DDD8_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject8014DDD8_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject8014DDD8 : UnknownGenObject8014DDD8_1 {
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject8014DDD8(){unknown00=igConvertTransformsToCompressedSequencesQS_vtable;}
};
struct UnknownGenRoot8014E0F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014E0F4(){igObject_construct(this);}
};
struct UnknownGenObject8014E0F4_0 : UnknownGenRoot8014E0F4 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8014E0F4_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8014E0F4_1 : UnknownGenObject8014E0F4_0 {
 UnknownGenRefMember unknown28;
 UnknownGenString unknown2C;
 inline ~UnknownGenObject8014E0F4_1(){unknown00=lbl_804A4744;}
};
struct UnknownGenObject8014E0F4 : UnknownGenObject8014E0F4_1 {
 char unknown30[24];
 inline ~UnknownGenObject8014E0F4(){unknown00=igConvertTransform_vtable;}
};
extern "C" {
void *igConvertTransform_getMeta(){
 if(!igConvertTransform_meta || !(reinterpret_cast<unsigned int *>(igConvertTransform_meta)[0x24/4]&4)) igConvertTransform_arkRegister();
 return igConvertTransform_meta;
}
void *igConvertTransform_vtableRead(){
 UnknownGenObject8014E0F4 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4744;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=igConvertTransform_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igConvertTransform_arkRegister(){
 meta_registerNow((int)igConvertTransform_register);
}
void igConvertTransform_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igConvertTransform_meta,(int)igOptTraverseGraph_register,(int)fn_8013AFE4,(int)igConvertTransform_getMetaCall,(int)igConvertTransform_className,72,(int)igConvertTransform_vtableRead,(int)igConvertTransform_fieldInit,0,0);
}
void *igConvertTransform_getMetaCall(){return igConvertTransform_getMeta();}
}
#pragma pop
