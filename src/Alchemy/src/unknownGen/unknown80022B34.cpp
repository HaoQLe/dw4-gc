#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80022CD8();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80066188(int);
void *fn_80066DD8(int,int);
void *fn_800680B4(void *,void *);
void fn_80075A2C(void *);
void *fn_80075A68(void *,void *);
extern char lbl_80471914[];
extern char lbl_80476E6C[];
extern void *lbl_805614BC;
extern void *lbl_805621F4;
void fn_80022CB0();
}
struct UnknownGenObject80022C28 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80022C28(){unknown00=lbl_80476E6C;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_80022B34(void *a,void *b){
 if(*reinterpret_cast<unsigned char *>(Gap::Core::_arkCore)){
  fn_80022CB0();
  return fn_800680B4(a,b);
 }
 void *object=fn_80066DD8(0x34,0);
 if(object) object=fn_80075A68(object,a);
 return object;
}
void *fn_80022BB0(){
 if(!lbl_805614BC) lbl_805614BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805614BC;
}
void *fn_80022BEC(){
 if(!lbl_805614BC || !(reinterpret_cast<unsigned int *>(lbl_805614BC)[0x24/4]&4)) fn_80022CB0();
 return lbl_805614BC;
}
void *fn_80022C28(){
 UnknownGenObject80022C28 object;
 fn_80075A2C(&object);
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80022CB0(){
 fn_80066188((int)fn_80022CD8);
}
}
#pragma pop
