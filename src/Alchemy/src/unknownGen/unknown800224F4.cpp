#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002265C();
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80075C84(void *);
void *fn_80075CC0(void *,void *);
extern char lbl_80471914[];
extern char lbl_80476F60[];
extern void *lbl_805614A8;
void fn_80022634();
}
struct UnknownGenRoot800225AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800225AC(){fn_80075C84(this);}
};
struct UnknownGenObject800225AC_0 : UnknownGenRoot800225AC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject800225AC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject800225AC : UnknownGenObject800225AC_0 {
 char unknown10[48];
 inline ~UnknownGenObject800225AC(){unknown00=lbl_80476F60;}
};
extern "C" {
void *fn_800224F4(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  fn_80022634();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80075CC0(object,a);
 return object;
}
void *fn_80022570(){
 if(!lbl_805614A8 || !(reinterpret_cast<unsigned int *>(lbl_805614A8)[0x24/4]&4)) fn_80022634();
 return lbl_805614A8;
}
void *fn_800225AC(){
 UnknownGenObject800225AC object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80022634(){
 fn_80066188((int)fn_8002265C);
}
}
#pragma pop
