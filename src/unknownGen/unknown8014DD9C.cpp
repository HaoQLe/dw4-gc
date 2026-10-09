#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80035694();
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013AFE4();
void igConvertTransform_fieldInit();
void igOptTraverseGraph_register();
void igOptVisitObject_register();
extern char lbl_8049F9F0[];
extern char lbl_8049FA28[];
extern char lbl_804A46AC[];
extern char lbl_804A4744[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804A736C[];
extern char lbl_804A7404[];
extern char lbl_804AAF48[];
extern char lbl_8055FBE0[8];
extern char lbl_8055FBE8[8];
extern char lbl_8055FBF8[8];
extern char lbl_8055FC00[8];
extern char lbl_8055FC08[8];
extern void *lbl_8056441C;
extern void *lbl_80564428;
void *igConvertTransformsToCompressedSequencesQS_getMeta();
void *igConvertTransformsToCompressedSequencesQS_vtableRead();
void fn_8014DF58();
void igConvertTransformsToCompressedSequencesQS_register();
void *igConvertTransformsToCompressedSequencesQS_getMetaCall();
void igConvertTransformsToCompressedSequencesQS_fieldInit();
void *igConvertTransform_getMeta();
void *igConvertTransform_vtableRead();
void fn_8014E26C();
void igConvertTransform_register();
void *igConvertTransform_getMetaCall();
}
struct UnknownGenRoot8014DDD8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014DDD8(){fn_8006665C(this);}
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
 inline ~UnknownGenObject8014DDD8(){unknown00=lbl_804A736C;}
};
struct UnknownGenRoot8014E0F4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8014E0F4(){fn_8006665C(this);}
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
 inline ~UnknownGenObject8014E0F4(){unknown00=lbl_804A7404;}
};
extern "C" {
void *igConvertTransformsToCompressedSequencesQS_getMeta(){
 if(!lbl_8056441C || !(reinterpret_cast<unsigned int *>(lbl_8056441C)[0x24/4]&4)) fn_8014DF58();
 return lbl_8056441C;
}
void *igConvertTransformsToCompressedSequencesQS_vtableRead(){
 UnknownGenObject8014DDD8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A46AC;
 object.unknown28.value=0;
 object.unknown00=lbl_804A736C;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014DF58(){
 fn_80066188((int)igConvertTransformsToCompressedSequencesQS_register);
}
void igConvertTransformsToCompressedSequencesQS_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056441C,(int)igOptVisitObject_register,(int)fn_8012FEB0,(int)igConvertTransformsToCompressedSequencesQS_getMetaCall,(int)lbl_8049F9F0,52,(int)igConvertTransformsToCompressedSequencesQS_vtableRead,(int)igConvertTransformsToCompressedSequencesQS_fieldInit,0,(int)lbl_8055FBE0);
}
void *igConvertTransformsToCompressedSequencesQS_getMetaCall(){return igConvertTransformsToCompressedSequencesQS_getMeta();}
void igConvertTransformsToCompressedSequencesQS_fieldInit(){
 void *value0=lbl_8056441C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FBE8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80035694();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value4,1);
 fn_800659C0(value0,lbl_8055FBF8,lbl_8055FC00,lbl_8055FC08,value1);
}
void *igConvertTransform_getMeta(){
 if(!lbl_80564428 || !(reinterpret_cast<unsigned int *>(lbl_80564428)[0x24/4]&4)) fn_8014E26C();
 return lbl_80564428;
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
 object.unknown00=lbl_804A7404;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014E26C(){
 fn_80066188((int)igConvertTransform_register);
}
void igConvertTransform_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564428,(int)igOptTraverseGraph_register,(int)fn_8013AFE4,(int)igConvertTransform_getMetaCall,(int)lbl_8049FA28,72,(int)igConvertTransform_vtableRead,(int)igConvertTransform_fieldInit,0,0);
}
void *igConvertTransform_getMetaCall(){return igConvertTransform_getMeta();}
}
#pragma pop
