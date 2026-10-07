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
void fn_80066B08();
void fn_80216620();
void fn_80216B40();
void *fn_80216BE0();
void fn_80217A8C();
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
void *fn_802177F0();
void fn_8021783C();
void fn_80217864();
void *fn_802178D4();
void fn_802178DC();
void *fn_80217958();
void *fn_80217994();
void fn_802179D4();
void fn_802179FC();
void *fn_80217A6C();
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
void *fn_802177B4(){
 if(!lbl_80565A30 || !(reinterpret_cast<unsigned int *>(lbl_80565A30)[0x24/4]&4)) fn_8021783C();
 return lbl_80565A30;
}
void *fn_802177F0(){
 UnknownGenObject802177F0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BC590;
 object.unknown00=lbl_804BB42C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021783C(){
 fn_80066188((int)fn_80217864);
}
void fn_80217864(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A30,(int)fn_80216B40,(int)fn_802178D4,(int)fn_80216BE0,(int)lbl_804BA4E4,2508,(int)fn_802177F0,(int)fn_802178DC,0,0);
}
void *fn_802178D4(){return lbl_805659E4;}
void fn_802178DC(){
 void *value0=lbl_80565A30;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560BE0,2);
 void *value2=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)624;
 fn_800659C0(value0,lbl_80560BF4,lbl_80560BFC,lbl_80560C04,value1);
}
void *fn_80217958(){
 if(!lbl_80565A3C || !(reinterpret_cast<unsigned int *>(lbl_80565A3C)[0x24/4]&4)) fn_802179D4();
 return lbl_80565A3C;
}
void *fn_80217994(){
 UnknownGenObject80217994_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804BC534;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_802179D4(){
 fn_80066188((int)fn_802179FC);
}
void fn_802179FC(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A3C,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80217A6C,(int)lbl_804BA504,20,(int)fn_80217994,(int)fn_80217A8C,0,0);
}
void *fn_80217A6C(){return fn_80217958();}
}
#pragma pop
