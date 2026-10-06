#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80075AC4(void *,int);
void fn_800A325C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B67C8();
extern char lbl_804795AC[];
extern char lbl_804795C0[];
extern char lbl_804795D0[];
extern char lbl_8047C3E8[];
extern char lbl_8047C468[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E42C[4];
extern char lbl_8055E438[4];
extern char lbl_8055E43C[4];
extern char lbl_8055E440[4];
extern void *lbl_80562854;
extern void *lbl_8056285C;
void *fn_800B6378();
void *fn_800B63B4();
void fn_800B640C();
void fn_800B6434();
void *fn_800B64A4();
void fn_800B64C4();
void *fn_800B6540();
void *fn_800B657C();
void fn_800B6708();
void fn_800B6730();
void *fn_800B67A8();
}
struct UnknownGenObject800B63B4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B657C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B657C(){fn_8006665C(this);}
};
struct UnknownGenObject800B657C : UnknownGenRoot800B657C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[32];
 inline ~UnknownGenObject800B657C(){unknown00=lbl_8047C468;}
};
extern "C" {
void *fn_800B6340(void *object){
 fn_800B640C();
 return fn_8006546C(lbl_80562854,object);
}
void *fn_800B6378(){
 if(!lbl_80562854 || !(reinterpret_cast<unsigned int *>(lbl_80562854)[0x24/4]&4)) fn_800B640C();
 return lbl_80562854;
}
void *fn_800B63B4(){
 UnknownGenObject800B63B4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C3E8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B640C(){
 fn_80066188((int)fn_800B6434);
}
void fn_800B6434(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562854,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B64A4,(int)lbl_804795AC,16,(int)fn_800B63B4,(int)fn_800B64C4,0,0);
}
void *fn_800B64A4(){return fn_800B6378();}
void fn_800B64C4(){
 void *value0=lbl_80562854;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E42C,1);
 void *value2=fn_800658E4(value0,value1);
 fn_80075AC4(value2,-1);
 fn_800659C0(value0,lbl_8055E438,lbl_8055E43C,lbl_8055E440,value1);
}
void *fn_800B6540(){
 if(!lbl_8056285C || !(reinterpret_cast<unsigned int *>(lbl_8056285C)[0x24/4]&4)) fn_800B6708();
 return lbl_8056285C;
}
void *fn_800B657C(){
 UnknownGenObject800B657C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C468;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *fn_800B6694(UnknownGenHolder *object,short flags){
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
void fn_800B6708(){
 fn_80066188((int)fn_800B6730);
}
void fn_800B6730(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_8056285C,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B67A8,(int)lbl_804795D0,44,(int)fn_800B657C,(int)fn_800B67C8,0,(int)lbl_804795C0);
}
void *fn_800B67A8(){return fn_800B6540();}
}
#pragma pop
