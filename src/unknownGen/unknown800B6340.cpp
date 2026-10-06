#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B64C4();
extern char lbl_804795AC[];
extern char lbl_8047C3E8[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_80562854;
void *fn_800B6378();
void *fn_800B63B4();
void fn_800B640C();
void fn_800B6434();
void *fn_800B64A4();
}
struct UnknownGenObject800B63B4_0 {
 void *unknown00;
 char unknown04[20];
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
}
#pragma pop
