#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_803F0244(void *,void *);
void fn_803FA27C(void *,...);
void fn_803FDDAC(int);
extern char lbl_804611C0[];
}
struct UnknownGenL803FD8A0_8 {
 int m08;
 int m0C;
 int m10;
 int m14;
 int m18;
 int m1C;
};
extern "C" {
void fn_803FD8A0(int p0){
 void *value0;
 void *value1;
 void *value2;
 void *value3;
 void *value4;
 void *value5;
 void *value6;
 void *value7;
 UnknownGenL803FD8A0_8 local0;
 value0=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+464);
 value1=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+64);
 if(value0){
  if((unsigned int)(int)value0==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+500)){
   local0.m0C=(int)(int)value0;
   local0.m08=(int)1;
   value2=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+504);
   local0.m10=(int)(int)value2;
   value3=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+508);
   local0.m14=(int)(int)value3;
   local0.m18=(int)0;
   local0.m1C=(int)0;
  } else {
   if((unsigned int)(int)value0==(unsigned int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+468)){
    local0.m0C=(int)(int)value0;
    local0.m08=(int)0;
    local0.m10=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+472);
    local0.m14=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+476);
    value4=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+480);
    local0.m18=(int)(int)value4;
    local0.m1C=(int)0;
   } else {
    local0.m08=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+484);
    local0.m0C=(int)(int)value0;
    local0.m10=(int)(int)*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+488);
    value5=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+492);
    local0.m14=(int)(int)value5;
    value6=*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+496);
    local0.m18=(int)(int)value6;
    local0.m1C=(int)0;
   }
  }
  value7=fn_803F0244(value1,&local0);
  if((int)(int)value7!=0){
   fn_803FDDAC(-312);
   fn_803FA27C(lbl_804611C0);
   return;
  } else {
   return;
  }
 }
}
}
#pragma pop
