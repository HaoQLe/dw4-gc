#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void fn_8003EC68(void *,int);
void fn_80046E58(void *,void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800AFDEC();
void fn_800CE04C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80478698[];
extern char lbl_804786AC[];
extern char lbl_8047B090[];
extern char lbl_8047D578[];
extern char lbl_8047E194[];
extern char lbl_8047E1F8[];
extern char lbl_8047E50C[];
extern char lbl_8055E0B0[8];
extern char lbl_8055E0B8[8];
extern char lbl_8055E0C0[8];
extern char lbl_8055E0C8[8];
extern char lbl_8055E0D0[8];
extern char lbl_8055E0D8[4];
extern void *lbl_805621F4;
extern void *lbl_80562594;
extern void *lbl_80562598;
extern void *lbl_805625A4;
void *fn_800AF990();
void *fn_800AF9CC();
void fn_800AFA3C();
void fn_800AFA64();
void *fn_800AFAD0();
void *fn_800AFB28();
void *fn_800AFB64();
void fn_800AFBBC();
void fn_800AFBE4();
void *fn_800AFC54();
void fn_800AFC74();
}
struct UnknownGenObject800AF9CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800AFB64_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800AF954(){
 if(!lbl_80562594) lbl_80562594=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562594;
}
void *fn_800AF990(){
 if(!lbl_80562594 || !(reinterpret_cast<unsigned int *>(lbl_80562594)[0x24/4]&4)) fn_800AFA3C();
 return lbl_80562594;
}
void *fn_800AF9CC(){
 UnknownGenObject800AF9CC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047E1F8;
 object.unknown00=lbl_8047E194;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AFA3C(){
 fn_80066188((int)fn_800AFA64);
}
void fn_800AFA64(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562594,(int)fn_8002907C,(int)fn_80024180,(int)fn_800AFAD0,(int)lbl_80478698,20,(int)fn_800AF9CC,0,0,(int)lbl_8055E0B0);
}
void *fn_800AFAD0(){return fn_800AF990();}
void *fn_800AFAF0(void *object){
 fn_800AFBBC();
 return fn_8006546C(lbl_80562598,object);
}
void *fn_800AFB28(){
 if(!lbl_80562598 || !(reinterpret_cast<unsigned int *>(lbl_80562598)[0x24/4]&4)) fn_800AFBBC();
 return lbl_80562598;
}
void *fn_800AFB64(){
 UnknownGenObject800AFB64_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B090;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AFBBC(){
 fn_80066188((int)fn_800AFBE4);
}
void fn_800AFBE4(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562598,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AFC54,(int)lbl_804786AC,20,(int)fn_800AFB64,(int)fn_800AFC74,0,0);
}
void *fn_800AFC54(){return fn_800AFB28();}
void fn_800AFC74(){
 void *value0=lbl_80562598;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E0B8,2);
 void *value2=fn_800658E4(value0,value1);
 fn_8003EC68(value2,1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80046E58(value3,lbl_8055E0D8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+52)=(void *)fn_800CE04C;
 fn_800659C0(value0,lbl_8055E0C0,lbl_8055E0C8,lbl_8055E0D0,value1);
}
void *fn_800AFD14(){
 if(!lbl_805625A4) lbl_805625A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805625A4;
}
void *fn_800AFD50(){
 if(!lbl_805625A4 || !(reinterpret_cast<unsigned int *>(lbl_805625A4)[0x24/4]&4)) fn_800AFDEC();
 return lbl_805625A4;
}
}
#pragma pop
