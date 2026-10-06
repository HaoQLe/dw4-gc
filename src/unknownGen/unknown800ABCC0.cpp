#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800AC29C();
void fn_800BB228();
void fn_800BB858();
void *fn_800CE788();
extern char lbl_80477D08[];
extern char lbl_80477D3C[];
extern char lbl_80477D50[];
extern char lbl_8047A61C[];
extern char lbl_8047A680[];
extern char lbl_8047D514[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DE60[8];
extern char lbl_8055DE68[4];
extern char lbl_8055DE6C[4];
extern char lbl_8055DE70[4];
extern char lbl_8055DE74[4];
extern char lbl_8055DE78[8];
extern void *lbl_805621F4;
extern void *lbl_80562404;
extern void *lbl_8056240C;
extern void *lbl_80562410;
extern void *lbl_80562A58;
extern void *lbl_80562A68;
void *fn_800ABCF8();
void *fn_800ABD34();
void fn_800ABE3C();
void fn_800ABE64();
void *fn_800ABED8();
void *fn_800ABEF8();
void fn_800ABF00();
void *fn_800ABFD0();
void fn_800AC00C();
void fn_800AC034();
void *fn_800AC098();
void *fn_800AC0B8();
void *fn_800AC0FC();
void *fn_800AC138();
void fn_800AC1D8();
void fn_800AC200();
void *fn_800AC274();
void *fn_800AC294();
}
struct UnknownGenRoot800ABD34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800ABD34(){fn_8006665C(this);}
};
struct UnknownGenObject800ABD34 : UnknownGenRoot800ABD34 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject800ABD34(){unknown00=lbl_8047A61C;}
};
struct UnknownGenRoot800AC138 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AC138(){fn_8006665C(this);}
};
struct UnknownGenObject800AC138 : UnknownGenRoot800AC138 {
 char unknown04[24];
 UnknownGenRefMember unknown1C;
 char unknown20[16];
 inline ~UnknownGenObject800AC138(){unknown00=lbl_8047A680;}
};
extern "C" {
void *fn_800ABCC0(void *object){
 fn_800ABE3C();
 return fn_8006546C(lbl_80562404,object);
}
void *fn_800ABCF8(){
 if(!lbl_80562404 || !(reinterpret_cast<unsigned int *>(lbl_80562404)[0x24/4]&4)) fn_800ABE3C();
 return lbl_80562404;
}
void *fn_800ABD34(){
 UnknownGenObject800ABD34 object;
 object.unknown00=lbl_8047D514;
 object.unknown00=lbl_8047A61C;
 object.unknown08.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800ABDC8(UnknownGenHolder *object,short flags){
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
void fn_800ABE3C(){
 fn_80066188((int)fn_800ABE64);
}
void fn_800ABE64(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562404,(int)fn_800BB228,(int)fn_800ABEF8,(int)fn_800ABED8,(int)lbl_80477D08,12,(int)fn_800ABD34,(int)fn_800ABF00,0,(int)lbl_8055DE60);
}
void *fn_800ABED8(){return fn_800ABCF8();}
void *fn_800ABEF8(){return lbl_80562A58;}
void fn_800ABF00(){
 void *value0=lbl_80562404;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DE68,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800CE788();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+38)=0;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+40)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+39)=1;
 fn_800659C0(value0,lbl_8055DE6C,lbl_8055DE70,lbl_8055DE74,value1);
}
void *fn_800ABF94(){
 if(!lbl_8056240C) lbl_8056240C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056240C;
}
void *fn_800ABFD0(){
 if(!lbl_8056240C || !(reinterpret_cast<unsigned int *>(lbl_8056240C)[0x24/4]&4)) fn_800AC00C();
 return lbl_8056240C;
}
void fn_800AC00C(){
 fn_80066188((int)fn_800AC034);
}
void fn_800AC034(){
 fn_800ABC8C();
 fn_80066204(1,(int)&lbl_8056240C,(int)fn_800BB858,(int)fn_800AC0B8,(int)fn_800AC098,(int)lbl_80477D3C,12,0,0,0,0);
}
void *fn_800AC098(){return fn_800ABFD0();}
void *fn_800AC0B8(){return lbl_80562A68;}
void *fn_800AC0C0(){
 if(!lbl_80562410) lbl_80562410=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562410;
}
void *fn_800AC0FC(){
 if(!lbl_80562410 || !(reinterpret_cast<unsigned int *>(lbl_80562410)[0x24/4]&4)) fn_800AC1D8();
 return lbl_80562410;
}
void *fn_800AC138(){
 UnknownGenObject800AC138 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047A680;
 object.unknown1C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AC1D8(){
 fn_80066188((int)fn_800AC200);
}
void fn_800AC200(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562410,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AC274,(int)lbl_80477D50,40,(int)fn_800AC138,(int)fn_800AC29C,0,(int)lbl_8055DE78);
}
void *fn_800AC274(){return fn_800AC0FC();}
void *fn_800AC294(){return lbl_8056240C;}
}
#pragma pop
