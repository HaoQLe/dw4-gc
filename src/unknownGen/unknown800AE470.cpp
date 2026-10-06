#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void *fn_80029E64(void *);
void fn_8002EABC();
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
void fn_800AC034();
void *fn_800AC294();
void fn_800AE924();
void *fn_800AEA50();
void *fn_800BAAC4();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_80478240[];
extern char lbl_80478304[];
extern char lbl_8047AD50[];
extern char lbl_8047ADB8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055DFD8[8];
extern char lbl_8055DFE0[4];
extern char lbl_8055DFE4[4];
extern char lbl_8055DFE8[4];
extern char lbl_8055DFEC[4];
extern void *lbl_805621F4;
extern void *lbl_805624FC;
extern void *lbl_80562504;
void *fn_800AE470();
void *fn_800AE4AC();
void fn_800AE618();
void fn_800AE640();
void *fn_800AE6B4();
void fn_800AE6D4();
void *fn_800AE7D0();
void *fn_800AE80C();
void fn_800AE864();
void fn_800AE88C();
void *fn_800AE904();
}
struct UnknownGenRoot800AE4AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800AE4AC(){fn_8006665C(this);}
};
struct UnknownGenObject800AE4AC_0 : UnknownGenRoot800AE4AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800AE4AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject800AE4AC_1 : UnknownGenObject800AE4AC_0 {
 inline ~UnknownGenObject800AE4AC_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject800AE4AC : UnknownGenObject800AE4AC_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800AE4AC(){unknown00=lbl_8047AD50;}
};
struct UnknownGenObject800AE80C_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_800AE470(){
 if(!lbl_805624FC || !(reinterpret_cast<unsigned int *>(lbl_805624FC)[0x24/4]&4)) fn_800AE618();
 return lbl_805624FC;
}
void *fn_800AE4AC(){
 UnknownGenObject800AE4AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_8047AD50;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *dtor_800AE5A4(UnknownGenHolder *object,short flags){
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
void fn_800AE618(){
 fn_80066188((int)fn_800AE640);
}
void fn_800AE640(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624FC,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_800AE6B4,(int)lbl_80478240,24,(int)fn_800AE4AC,(int)fn_800AE6D4,0,(int)lbl_8055DFD8);
}
void *fn_800AE6B4(){return fn_800AE470();}
void fn_800AE6D4(){
 void *value0=lbl_805624FC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055DFE0,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800BAAC4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055DFE4,lbl_8055DFE8,lbl_8055DFEC,value1);
}
void *fn_800AE75C(void *object){
 fn_800AE864();
 return fn_8006546C(lbl_80562504,object);
}
void *fn_800AE794(){
 if(!lbl_80562504) lbl_80562504=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562504;
}
void *fn_800AE7D0(){
 if(!lbl_80562504 || !(reinterpret_cast<unsigned int *>(lbl_80562504)[0x24/4]&4)) fn_800AE864();
 return lbl_80562504;
}
void *fn_800AE80C(){
 UnknownGenObject800AE80C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047ADB8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800AE864(){
 fn_80066188((int)fn_800AE88C);
}
void fn_800AE88C(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562504,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800AE904,(int)lbl_80478304,40,(int)fn_800AE80C,(int)fn_800AE924,(int)fn_800AEA50,0);
}
void *fn_800AE904(){return fn_800AE7D0();}
}
#pragma pop
