#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801AE468(void *,short);
void fn_801AE970();
void fn_801B4450();
void fn_801B4574();
extern char lbl_804ABED0[];
extern char lbl_804ABEE0[];
extern char lbl_804B3748[];
extern char lbl_804B37AC[];
extern char lbl_804B977C[];
extern char lbl_804B97E0[];
extern char lbl_804B983C[];
extern char lbl_805601C4[4];
extern char lbl_805601D0[4];
extern char lbl_805601D4[4];
extern char lbl_805601D8[4];
extern char lbl_805601DC[4];
extern char lbl_805601E0[4];
extern char lbl_805601E4[4];
extern char lbl_805601E8[4];
extern void *lbl_805621F4;
extern void *lbl_805647B8;
extern void *lbl_805647C0;
extern void *lbl_805647C8;
extern void *lbl_80564A34;
extern void *lbl_80564A38;
void *fn_801ADF0C();
void *fn_801ADF48();
void fn_801ADFDC();
void fn_801AE004();
void *fn_801AE074();
void *fn_801AE094();
void fn_801AE09C();
void *fn_801AE13C();
void *fn_801AE178();
void fn_801AE20C();
void fn_801AE234();
void *fn_801AE2A4();
void *fn_801AE2C4();
void fn_801AE2CC();
}
struct UnknownGenRoot801ADF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADF48(){fn_8006665C(this);}
};
struct UnknownGenObject801ADF48 : UnknownGenRoot801ADF48 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801ADF48(){unknown00=lbl_804B97E0;}
};
struct UnknownGenRoot801AE178 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AE178(){fn_8006665C(this);}
};
struct UnknownGenObject801AE178 : UnknownGenRoot801AE178 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801AE178(){unknown00=lbl_804B3748;}
};
struct UnknownGenObject801AE3AC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[4];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 char unknown4C[4];
 int unknown50;
 int unknown54;
 int unknown58;
 int unknown5C;
 int unknown60;
 int unknown64;
 int unknown68;
 int unknown6C;
 char unknown70[4];
 int unknown74;
 char unknown78[24];
};
extern "C" {
void *fn_801ADF0C(){
 if(!lbl_805647B8 || !(reinterpret_cast<unsigned int *>(lbl_805647B8)[0x24/4]&4)) fn_801ADFDC();
 return lbl_805647B8;
}
void *fn_801ADF48(){
 UnknownGenObject801ADF48 object;
 object.unknown00=lbl_804B983C;
 object.unknown00=lbl_804B97E0;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801ADFDC(){
 fn_80066188((int)fn_801AE004);
}
void fn_801AE004(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647B8,(int)fn_801B4450,(int)fn_801AE094,(int)fn_801AE074,(int)lbl_804ABED0,12,(int)fn_801ADF48,(int)fn_801AE09C,0,0);
}
void *fn_801AE074(){return fn_801ADF0C();}
void *fn_801AE094(){return lbl_80564A34;}
void fn_801AE09C(){
 void *value0=lbl_805647B8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805601C4,1);
 fn_800659C0(value0,lbl_805601D0,lbl_805601D4,lbl_805601D8,value1);
}
void *fn_801AE104(void *object){
 fn_801AE20C();
 return fn_8006546C(lbl_805647C0,object);
}
void *fn_801AE13C(){
 if(!lbl_805647C0 || !(reinterpret_cast<unsigned int *>(lbl_805647C0)[0x24/4]&4)) fn_801AE20C();
 return lbl_805647C0;
}
void *fn_801AE178(){
 UnknownGenObject801AE178 object;
 object.unknown00=lbl_804B977C;
 object.unknown00=lbl_804B3748;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AE20C(){
 fn_80066188((int)fn_801AE234);
}
void fn_801AE234(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805647C0,(int)fn_801B4574,(int)fn_801AE2C4,(int)fn_801AE2A4,(int)lbl_804ABEE0,12,(int)fn_801AE178,(int)fn_801AE2CC,0,0);
}
void *fn_801AE2A4(){return fn_801AE13C();}
void *fn_801AE2C4(){return lbl_80564A38;}
void fn_801AE2CC(){
 void *value0=lbl_805647C0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_805601DC,1);
 fn_800659C0(value0,lbl_805601E0,lbl_805601E4,lbl_805601E8,value1);
}
void *fn_801AE334(){
 if(!lbl_805647C8) lbl_805647C8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805647C8;
}
void *fn_801AE370(){
 if(!lbl_805647C8 || !(reinterpret_cast<unsigned int *>(lbl_805647C8)[0x24/4]&4)) fn_801AE970();
 return lbl_805647C8;
}
void *fn_801AE3AC(){
 UnknownGenObject801AE3AC object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B37AC;
 object.unknown08=0;
 object.unknown10=0;
 object.unknown14=0;
 object.unknown18=0;
 object.unknown1C=0;
 object.unknown20=0;
 object.unknown24=0;
 object.unknown28=0;
 object.unknown2C=0;
 object.unknown30=0;
 object.unknown34=0;
 object.unknown38=0;
 object.unknown3C=0;
 object.unknown40=0;
 object.unknown44=0;
 object.unknown48=0;
 object.unknown50=0;
 object.unknown54=0;
 object.unknown58=0;
 object.unknown5C=0;
 object.unknown60=0;
 object.unknown64=0;
 object.unknown68=0;
 object.unknown6C=0;
 object.unknown74=0;
 void *result=*reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
 fn_801AE468(&object,-1);
 return result;
}
}
#pragma pop
