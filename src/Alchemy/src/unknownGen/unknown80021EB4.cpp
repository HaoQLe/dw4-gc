#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8002201C();
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80075F0C(void *);
void *fn_80075F48(void *,void *);
extern char lbl_80471914[];
extern char lbl_80477054[];
extern void *lbl_80561494;
void fn_80021FF4();
}
struct UnknownGenRoot80021F6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80021F6C(){fn_80075F0C(this);}
};
struct UnknownGenObject80021F6C_0 : UnknownGenRoot80021F6C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80021F6C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80021F6C : UnknownGenObject80021F6C_0 {
 char unknown10[48];
 inline ~UnknownGenObject80021F6C(){unknown00=lbl_80477054;}
};
extern "C" {
void *fn_80021EB4(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  fn_80021FF4();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80075F48(object,a);
 return object;
}
void *fn_80021F30(){
 if(!lbl_80561494 || !(reinterpret_cast<unsigned int *>(lbl_80561494)[0x24/4]&4)) fn_80021FF4();
 return lbl_80561494;
}
void *fn_80021F6C(){
 UnknownGenObject80021F6C object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80021FF4(){
 fn_80066188((int)fn_8002201C);
}
}
#pragma pop
