#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_800BB7B8();
void fn_8012FC48();
void *fn_8013496C();
void *fn_80135970();
void *fn_801B74F0();
void igItemBase_register();
extern char lbl_804A0298[];
extern char lbl_804A02A4[];
extern char lbl_804A02B0[];
extern char lbl_8055FD88[8];
extern char lbl_8055FD90[8];
extern char lbl_8055FD98[8];
extern char lbl_8055FDA0[8];
extern void *lbl_80564594;
extern void *lbl_805645A0;
void *igAttrEdit_getMeta();
void fn_80153628();
void igAttrEdit_register();
void *igAttrEdit_getMetaCall();
void igAttrEdit_fieldInit();
void *igAttrContainer_getMeta();
void fn_801537B8();
void igAttrContainer_register();
void *igAttrContainer_getMetaCall();
}
extern "C" {
void *igAttrEdit_getMeta(){
 if(!lbl_80564594 || !(reinterpret_cast<unsigned int *>(lbl_80564594)[0x24/4]&4)) fn_80153628();
 return lbl_80564594;
}
void fn_80153628(){
 fn_80066188((int)igAttrEdit_register);
}
void igAttrEdit_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_80564594,(int)igAttrContainer_register,(int)fn_80135970,(int)igAttrEdit_getMetaCall,(int)lbl_804A02A4,40,0,(int)igAttrEdit_fieldInit,0,(int)lbl_804A0298);
}
void *igAttrEdit_getMetaCall(){return igAttrEdit_getMeta();}
void igAttrEdit_fieldInit(){
 void *value0=lbl_80564594;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD88,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_800BB7B8();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_8055FD90,lbl_8055FD98,lbl_8055FDA0,value1);
}
void *igAttrContainer_getMeta(){
 if(!lbl_805645A0 || !(reinterpret_cast<unsigned int *>(lbl_805645A0)[0x24/4]&4)) fn_801537B8();
 return lbl_805645A0;
}
void fn_801537B8(){
 fn_80066188((int)igAttrContainer_register);
}
void igAttrContainer_register(){
 fn_8012FC48();
 fn_80066204(1,(int)&lbl_805645A0,(int)igItemBase_register,(int)fn_8013496C,(int)igAttrContainer_getMetaCall,(int)lbl_804A02B0,32,0,0,0,0);
}
void *igAttrContainer_getMetaCall(){return igAttrContainer_getMeta();}
void fn_80153864(){}
}
#pragma pop
