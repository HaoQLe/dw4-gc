#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D031C();
void *fn_800D1B98();
void igContextExt_register();
void *igGamecubeMultiTextureExt_getMeta();
void igObject_register();
extern char lbl_804897F8[];
extern char lbl_8048980C[];
extern char lbl_8048981C[];
extern char lbl_8055EB54[4];
extern char lbl_8055EB60[4];
extern char lbl_8055EB64[4];
extern char lbl_8055EB68[4];
extern char lbl_8055EB6C[8];
extern void *lbl_805621F4;
extern void *lbl_80562F34;
extern void *lbl_80562F38;
extern void *lbl_80562F40;
extern char lbl_805668C8[4];
void *igMultiTextureExt_getMeta();
void fn_800D17DC();
void igMultiTextureExt_register();
void *igMultiTextureExt_getMetaCall();
void *fn_800D1890();
void *igGamecubeMultiTextureExt_getMetaCall();
void *igLineWidthExt_getMeta();
void fn_800D1900();
void igLineWidthExt_register();
void *igLineWidthExt_getMetaCall();
void igLineWidthExt_fieldInit();
void *igIndexArray_getMeta();
void fn_800D1AE0();
void igIndexArray_register();
void *igIndexArray_getMetaCall();
}
extern "C" {
void *igMultiTextureExt_getMeta(){
 if(!lbl_80562F34 || !(reinterpret_cast<unsigned int *>(lbl_80562F34)[0x24/4]&4)) fn_800D17DC();
 return lbl_80562F34;
}
void fn_800D17DC(){
 fn_80066188((int)igMultiTextureExt_register);
}
void igMultiTextureExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F34,(int)igContextExt_register,(int)fn_800D031C,(int)igMultiTextureExt_getMetaCall,(int)lbl_804897F8,20,0,(int)fn_800D1890,0,0);
}
void *igMultiTextureExt_getMetaCall(){return igMultiTextureExt_getMeta();}
void *fn_800D1890(){
 void *value0=lbl_80562F34;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeMultiTextureExt_getMetaCall;
 return value0;
}
void *igGamecubeMultiTextureExt_getMetaCall(){return igGamecubeMultiTextureExt_getMeta();}
void *igLineWidthExt_getMeta(){
 if(!lbl_80562F38 || !(reinterpret_cast<unsigned int *>(lbl_80562F38)[0x24/4]&4)) fn_800D1900();
 return lbl_80562F38;
}
void fn_800D1900(){
 fn_80066188((int)igLineWidthExt_register);
}
void igLineWidthExt_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F38,(int)igContextExt_register,(int)fn_800D031C,(int)igLineWidthExt_getMetaCall,(int)lbl_8048980C,24,0,(int)igLineWidthExt_fieldInit,0,0);
}
void *igLineWidthExt_getMetaCall(){return igLineWidthExt_getMeta();}
void igLineWidthExt_fieldInit(){
 void *value0=lbl_80562F38;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055EB54,1);
 void *value2=fn_800658E4(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_805668C8+0)));
 fn_800659C0(value0,lbl_8055EB60,lbl_8055EB64,lbl_8055EB68,value1);
}
void *fn_800D1A30(void *object){
 fn_800D1AE0();
 return fn_8006546C(lbl_80562F40,object);
}
void *fn_800D1A68(){
 if(!lbl_80562F40) lbl_80562F40=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562F40;
}
void *igIndexArray_getMeta(){
 if(!lbl_80562F40 || !(reinterpret_cast<unsigned int *>(lbl_80562F40)[0x24/4]&4)) fn_800D1AE0();
 return lbl_80562F40;
}
void fn_800D1AE0(){
 fn_80066188((int)igIndexArray_register);
}
void igIndexArray_register(){
 fn_800CE2F8();
 fn_80066204(1,(int)&lbl_80562F40,(int)igObject_register,(int)fn_800237D0,(int)igIndexArray_getMetaCall,(int)lbl_8048981C,28,0,(int)fn_800D1B98,0,(int)lbl_8055EB6C);
}
void *igIndexArray_getMetaCall(){return igIndexArray_getMeta();}
}
#pragma pop
