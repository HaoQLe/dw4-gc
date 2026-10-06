#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B36BC();
extern char lbl_80478F00[];
extern char lbl_80478F1C[];
extern char lbl_80478F40[];
extern char lbl_80478F4C[];
extern char lbl_8047BB6C[];
extern char lbl_8047BBEC[];
extern char lbl_8047BCE4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E2EC[4];
extern char lbl_8055E2F0[4];
extern char lbl_8055E2F4[4];
extern char lbl_8055E2F8[4];
extern char lbl_8055E2FC[4];
extern char lbl_8055E300[4];
extern char lbl_8055E304[4];
extern char lbl_8055E308[4];
extern void *lbl_805621F4;
extern void *lbl_80562718;
extern void *lbl_80562720;
extern void *lbl_80562728;
void *fn_800B30C8();
void *fn_800B3104();
void fn_800B315C();
void fn_800B3184();
void *fn_800B31F4();
void fn_800B3214();
void *fn_800B327C();
void *fn_800B32B8();
void fn_800B3310();
void fn_800B3338();
void *fn_800B33A8();
void fn_800B33C8();
void *fn_800B346C();
void *fn_800B34A8();
void fn_800B35FC();
void fn_800B3624();
void *fn_800B369C();
}
struct UnknownGenObject800B3104_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B32B8_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B34A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B34A8(){fn_8006665C(this);}
};
struct UnknownGenObject800B34A8 : UnknownGenRoot800B34A8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B34A8(){unknown00=lbl_8047BCE4;}
};
extern "C" {
void *fn_800B308C(){
 if(!lbl_80562718) lbl_80562718=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562718;
}
void *fn_800B30C8(){
 if(!lbl_80562718 || !(reinterpret_cast<unsigned int *>(lbl_80562718)[0x24/4]&4)) fn_800B315C();
 return lbl_80562718;
}
void *fn_800B3104(){
 UnknownGenObject800B3104_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BB6C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B315C(){
 fn_80066188((int)fn_800B3184);
}
void fn_800B3184(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562718,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B31F4,(int)lbl_80478F00,16,(int)fn_800B3104,(int)fn_800B3214,0,0);
}
void *fn_800B31F4(){return fn_800B30C8();}
void fn_800B3214(){
 void *value0=lbl_80562718;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2EC,1);
 fn_800659C0(value0,lbl_8055E2F0,lbl_8055E2F4,lbl_8055E2F8,value1);
}
void *fn_800B327C(){
 if(!lbl_80562720 || !(reinterpret_cast<unsigned int *>(lbl_80562720)[0x24/4]&4)) fn_800B3310();
 return lbl_80562720;
}
void *fn_800B32B8(){
 UnknownGenObject800B32B8_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BBEC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B3310(){
 fn_80066188((int)fn_800B3338);
}
void fn_800B3338(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562720,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B33A8,(int)lbl_80478F1C,16,(int)fn_800B32B8,(int)fn_800B33C8,0,0);
}
void *fn_800B33A8(){return fn_800B327C();}
void fn_800B33C8(){
 void *value0=lbl_80562720;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2FC,1);
 fn_800659C0(value0,lbl_8055E300,lbl_8055E304,lbl_8055E308,value1);
}
void *fn_800B3430(){
 if(!lbl_80562728) lbl_80562728=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562728;
}
void *fn_800B346C(){
 if(!lbl_80562728 || !(reinterpret_cast<unsigned int *>(lbl_80562728)[0x24/4]&4)) fn_800B35FC();
 return lbl_80562728;
}
void *fn_800B34A8(){
 UnknownGenObject800B34A8 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BCE4;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800B3588(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_800B35FC(){
 fn_80066188((int)fn_800B3624);
}
void fn_800B3624(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562728,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B369C,(int)lbl_80478F4C,20,(int)fn_800B34A8,(int)fn_800B36BC,0,(int)lbl_80478F40);
}
void *fn_800B369C(){return fn_800B346C();}
}
#pragma pop
