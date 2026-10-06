#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002E3B8();
void fn_800535B8(void *);
void *fn_800535F4(void *,void *);
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
extern char lbl_80471914[];
extern char lbl_80475B60[];
extern void *lbl_805619E0;
void fn_8002E390();
}
struct UnknownGenRoot8002E308 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002E308(){fn_800535B8(this);}
};
struct UnknownGenObject8002E308_0 : UnknownGenRoot8002E308 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002E308_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002E308 : UnknownGenObject8002E308_0 {
 char unknown10[48];
 inline ~UnknownGenObject8002E308(){unknown00=lbl_80475B60;}
};
extern "C" {
void *fn_8002E250(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  fn_8002E390();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_800535F4(object,a);
 return object;
}
void *fn_8002E2CC(){
 if(!lbl_805619E0 || !(reinterpret_cast<unsigned int *>(lbl_805619E0)[0x24/4]&4)) fn_8002E390();
 return lbl_805619E0;
}
void *fn_8002E308(){
 UnknownGenObject8002E308 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002E390(){
 fn_80066188((int)fn_8002E3B8);
}
}
#pragma pop
