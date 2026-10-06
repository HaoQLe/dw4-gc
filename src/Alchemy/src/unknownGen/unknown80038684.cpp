#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void fn_80038828();
void fn_8003EBC8(void *);
void *fn_8003EC04(void *,void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
extern char lbl_80471914[];
extern char lbl_80473E30[];
extern void *lbl_80561E48;
extern void *lbl_805621F4;
void fn_80038800();
}
struct UnknownGenRoot80038778 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80038778(){fn_8003EBC8(this);}
};
struct UnknownGenObject80038778_0 : UnknownGenRoot80038778 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80038778_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80038778 : UnknownGenObject80038778_0 {
 char unknown10[48];
 inline ~UnknownGenObject80038778(){unknown00=lbl_80473E30;}
};
extern "C" {
void *fn_80038684(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  fn_80038800();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_8003EC04(object,a);
 return object;
}
void *fn_80038700(){
 if(!lbl_80561E48) lbl_80561E48=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561E48;
}
void *fn_8003873C(){
 if(!lbl_80561E48 || !(reinterpret_cast<unsigned int *>(lbl_80561E48)[0x24/4]&4)) fn_80038800();
 return lbl_80561E48;
}
void *fn_80038778(){
 UnknownGenObject80038778 object;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80038800(){
 fn_80066188((int)fn_80038828);
}
}
#pragma pop
