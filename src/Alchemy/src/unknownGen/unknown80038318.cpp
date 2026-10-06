#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80029E64(void *);
void fn_80038538();
void *fn_8003BD20();
void *fn_800607F4(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80066B08();
extern char lbl_804677DC[];
extern char lbl_804677E8[];
extern char lbl_804731E0[];
extern void *lbl_80561E34;
extern void *lbl_805621F4;
void *fn_80038374();
void *fn_800383B0();
void fn_80038478();
void fn_800384A0();
void *fn_80038518();
}
struct UnknownGenRoot800383B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800383B0(){fn_8006665C(this);}
};
struct UnknownGenObject800383B0 : UnknownGenRoot800383B0 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800383B0(){unknown00=lbl_804731E0;}
};
extern "C" {
void *fn_80038318(){return fn_8003BD20();}
void *fn_80038338(){
 if(!lbl_80561E34) lbl_80561E34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80561E34;
}
void *fn_80038374(){
 if(!lbl_80561E34 || !(reinterpret_cast<unsigned int *>(lbl_80561E34)[0x24/4]&4)) fn_80038478();
 return lbl_80561E34;
}
void *fn_800383B0(){
 UnknownGenObject800383B0 object;
 object.unknown00=lbl_804731E0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80038478(){
 fn_80066188((int)fn_800384A0);
}
void fn_800384A0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561E34,(int)fn_80066B08,(int)fn_800237D0,(int)fn_80038518,(int)lbl_804677E8,24,(int)fn_800383B0,(int)fn_80038538,0,(int)lbl_804677DC);
}
void *fn_80038518(){return fn_80038374();}
}
#pragma pop
