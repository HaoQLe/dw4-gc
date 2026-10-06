#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800BA31C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80479C74[];
extern char lbl_80479C94[];
extern char lbl_80479CB0[];
extern char lbl_80479CC4[];
extern char lbl_80479CE4[];
extern char lbl_8047D1AC[];
extern char lbl_8047D22C[];
extern char lbl_8047D2AC[];
extern char lbl_8047D330[];
extern char lbl_8047D578[];
extern char lbl_8047DB50[];
extern char lbl_8047DBB4[];
extern char lbl_8047E50C[];
extern char lbl_8055E638[4];
extern char lbl_8055E63C[4];
extern char lbl_8055E640[4];
extern char lbl_8055E644[4];
extern char lbl_8055E648[4];
extern char lbl_8055E64C[4];
extern char lbl_8055E650[4];
extern char lbl_8055E654[4];
extern char lbl_8055E658[4];
extern char lbl_8055E65C[4];
extern char lbl_8055E660[4];
extern char lbl_8055E664[4];
extern char lbl_8055E668[8];
extern void *lbl_805621F4;
extern void *lbl_805629C8;
extern void *lbl_805629D0;
extern void *lbl_805629D8;
extern void *lbl_805629E0;
extern void *lbl_805629E4;
void *fn_800B9A30();
void *fn_800B9A6C();
void fn_800B9AC4();
void fn_800B9AEC();
void *fn_800B9B5C();
void fn_800B9B7C();
void *fn_800B9BE4();
void *fn_800B9C20();
void fn_800B9C78();
void fn_800B9CA0();
void *fn_800B9D10();
void fn_800B9D30();
void *fn_800B9E0C();
void *fn_800B9E48();
void fn_800B9EA0();
void fn_800B9EC8();
void *fn_800B9F38();
void fn_800B9F58();
void *fn_800B9FFC();
void *fn_800BA038();
void fn_800BA0A8();
void fn_800BA0D0();
void *fn_800BA13C();
void *fn_800BA1D0();
void *fn_800BA20C();
void fn_800BA264();
void fn_800BA28C();
void *fn_800BA2FC();
}
struct UnknownGenObject800B9A6C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9C20_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B9E48_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BA20C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800B9A30(){
 if(!lbl_805629C8 || !(reinterpret_cast<unsigned int *>(lbl_805629C8)[0x24/4]&4)) fn_800B9AC4();
 return lbl_805629C8;
}
void *fn_800B9A6C(){
 UnknownGenObject800B9A6C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D1AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9AC4(){
 fn_80066188((int)fn_800B9AEC);
}
void fn_800B9AEC(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629C8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9B5C,(int)lbl_80479C74,16,(int)fn_800B9A6C,(int)fn_800B9B7C,0,0);
}
void *fn_800B9B5C(){return fn_800B9A30();}
void fn_800B9B7C(){
 void *value0=lbl_805629C8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E638,1);
 fn_800659C0(value0,lbl_8055E63C,lbl_8055E640,lbl_8055E644,value1);
}
void *fn_800B9BE4(){
 if(!lbl_805629D0 || !(reinterpret_cast<unsigned int *>(lbl_805629D0)[0x24/4]&4)) fn_800B9C78();
 return lbl_805629D0;
}
void *fn_800B9C20(){
 UnknownGenObject800B9C20_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D22C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9C78(){
 fn_80066188((int)fn_800B9CA0);
}
void fn_800B9CA0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629D0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9D10,(int)lbl_80479C94,16,(int)fn_800B9C20,(int)fn_800B9D30,0,0);
}
void *fn_800B9D10(){return fn_800B9BE4();}
void fn_800B9D30(){
 void *value0=lbl_805629D0;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E648,1);
 fn_800659C0(value0,lbl_8055E64C,lbl_8055E650,lbl_8055E654,value1);
}
void *fn_800B9D98(void *object){
 fn_800B9EA0();
 return fn_8006546C(lbl_805629D8,object);
}
void *fn_800B9DD0(){
 if(!lbl_805629D8) lbl_805629D8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629D8;
}
void *fn_800B9E0C(){
 if(!lbl_805629D8 || !(reinterpret_cast<unsigned int *>(lbl_805629D8)[0x24/4]&4)) fn_800B9EA0();
 return lbl_805629D8;
}
void *fn_800B9E48(){
 UnknownGenObject800B9E48_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D2AC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B9EA0(){
 fn_80066188((int)fn_800B9EC8);
}
void fn_800B9EC8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629D8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B9F38,(int)lbl_80479CB0,16,(int)fn_800B9E48,(int)fn_800B9F58,0,0);
}
void *fn_800B9F38(){return fn_800B9E0C();}
void fn_800B9F58(){
 void *value0=lbl_805629D8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E658,1);
 fn_800659C0(value0,lbl_8055E65C,lbl_8055E660,lbl_8055E664,value1);
}
void *fn_800B9FC0(){
 if(!lbl_805629E0) lbl_805629E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629E0;
}
void *fn_800B9FFC(){
 if(!lbl_805629E0 || !(reinterpret_cast<unsigned int *>(lbl_805629E0)[0x24/4]&4)) fn_800BA0A8();
 return lbl_805629E0;
}
void *fn_800BA038(){
 UnknownGenObject800BA038_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8047DBB4;
 object.unknown00=lbl_8047DB50;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BA0A8(){
 fn_80066188((int)fn_800BA0D0);
}
void fn_800BA0D0(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629E0,(int)fn_8002907C,(int)fn_80024180,(int)fn_800BA13C,(int)lbl_80479CC4,20,(int)fn_800BA038,0,0,(int)lbl_8055E668);
}
void *fn_800BA13C(){return fn_800B9FFC();}
void *fn_800BA15C(void *object){
 fn_800BA264();
 return fn_8006546C(lbl_805629E4,object);
}
void *fn_800BA194(){
 if(!lbl_805629E4) lbl_805629E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805629E4;
}
void *fn_800BA1D0(){
 if(!lbl_805629E4 || !(reinterpret_cast<unsigned int *>(lbl_805629E4)[0x24/4]&4)) fn_800BA264();
 return lbl_805629E4;
}
void *fn_800BA20C(){
 UnknownGenObject800BA20C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047D330;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800BA264(){
 fn_80066188((int)fn_800BA28C);
}
void fn_800BA28C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805629E4,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800BA2FC,(int)lbl_80479CE4,28,(int)fn_800BA20C,(int)fn_800BA31C,0,0);
}
void *fn_800BA2FC(){return fn_800BA1D0();}
}
#pragma pop
