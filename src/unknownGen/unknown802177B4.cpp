#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void igMeanAndStandardDeviation_fieldInit();
void *igMersenneTwisterRandomNumber_getMetaCall();
void igObject_register();
void igRandomNumber_register();
extern char lbl_804BA4E4[];
extern char lbl_804BA504[];
extern char lbl_804BB42C[];
extern char lbl_804BC534[];
extern char lbl_804BC590[];
extern char lbl_80560BE0[8];
extern char lbl_80560BF4[8];
extern char lbl_80560BFC[8];
extern char lbl_80560C04[8];
extern void *lbl_805659E4;
extern void *lbl_80565A30;
extern void *lbl_80565A3C;
void *igMersenneTwisterRandomNumber_vtableRead();
void fn_8021783C();
void igMersenneTwisterRandomNumber_register();
void *igMersenneTwisterRandomNumber_parentMeta();
void igMersenneTwisterRandomNumber_fieldInit();
void *igMeanAndStandardDeviation_getMeta();
void *igMeanAndStandardDeviation_vtableRead();
void fn_802179D4();
void igMeanAndStandardDeviation_register();
void *igMeanAndStandardDeviation_getMetaCall();
}
struct UnknownGenObject802177F0_0 {
 void *unknown00;
 char unknown04[2516];
};
struct UnknownGenObject80217994_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igMersenneTwisterRandomNumber_getMeta(){
 if(!lbl_80565A30 || !(reinterpret_cast<unsigned int *>(lbl_80565A30)[0x24/4]&4)) fn_8021783C();
 return lbl_80565A30;
}
void *igMersenneTwisterRandomNumber_vtableRead(){
 UnknownGenObject802177F0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BC590;
 object.unknown00=lbl_804BB42C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021783C(){
 fn_80066188((int)igMersenneTwisterRandomNumber_register);
}
void igMersenneTwisterRandomNumber_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A30,(int)igRandomNumber_register,(int)igMersenneTwisterRandomNumber_parentMeta,(int)igMersenneTwisterRandomNumber_getMetaCall,(int)lbl_804BA4E4,2508,(int)igMersenneTwisterRandomNumber_vtableRead,(int)igMersenneTwisterRandomNumber_fieldInit,0,0);
}
void *igMersenneTwisterRandomNumber_parentMeta(){return lbl_805659E4;}
void igMersenneTwisterRandomNumber_fieldInit(){
 void *value0=lbl_80565A30;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560BE0,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)624;
 fn_800659C0(value0,lbl_80560BF4,lbl_80560BFC,lbl_80560C04,value1);
}
void *igMeanAndStandardDeviation_getMeta(){
 if(!lbl_80565A3C || !(reinterpret_cast<unsigned int *>(lbl_80565A3C)[0x24/4]&4)) fn_802179D4();
 return lbl_80565A3C;
}
void *igMeanAndStandardDeviation_vtableRead(){
 UnknownGenObject80217994_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BC534;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802179D4(){
 fn_80066188((int)igMeanAndStandardDeviation_register);
}
void igMeanAndStandardDeviation_register(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A3C,(int)igObject_register,(int)fn_800237D0,(int)igMeanAndStandardDeviation_getMetaCall,(int)lbl_804BA504,20,(int)igMeanAndStandardDeviation_vtableRead,(int)igMeanAndStandardDeviation_fieldInit,0,0);
}
void *igMeanAndStandardDeviation_getMetaCall(){return igMeanAndStandardDeviation_getMeta();}
}
#pragma pop
