#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void fn_801BE25C();
extern char lbl_804AF2F4[];
extern char lbl_804B39E8[];
extern char lbl_804B473C[];
extern void *lbl_805621F4;
extern void *lbl_80564E6C;
extern void *lbl_80564E70;
void *fn_801BDED4();
void *fn_801BDF10();
void fn_801BDF5C();
void fn_801BDF84();
void *fn_801BDFEC();
}
struct UnknownGenObject801BDF10_0 {
 void *unknown00;
 char unknown04[4];
};
extern "C" {
void *fn_801BDE9C(void *object){
 fn_801BDF5C();
 return fn_8006546C(lbl_80564E6C,object);
}
void *fn_801BDED4(){
 if(!lbl_80564E6C || !(reinterpret_cast<unsigned int *>(lbl_80564E6C)[0x24/4]&4)) fn_801BDF5C();
 return lbl_80564E6C;
}
void *fn_801BDF10(){
 UnknownGenObject801BDF10_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B473C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801BDF5C(){
 fn_80066188((int)fn_801BDF84);
}
void fn_801BDF84(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564E6C,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801BDFEC,(int)lbl_804AF2F4,8,(int)fn_801BDF10,0,0,0);
}
void *fn_801BDFEC(){return fn_801BDED4();}
void *fn_801BE00C(){
 if(!lbl_80564E70) lbl_80564E70=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564E70;
}
void *fn_801BE048(){
 if(!lbl_80564E70 || !(reinterpret_cast<unsigned int *>(lbl_80564E70)[0x24/4]&4)) fn_801BE25C();
 return lbl_80564E70;
}
}
#pragma pop
