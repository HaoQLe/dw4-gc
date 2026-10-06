#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B8E18();
extern char lbl_80477D08[];
extern char lbl_80479A18[];
extern char lbl_80479A28[];
extern char lbl_8047CEA0[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805621F4;
extern void *lbl_80562944;
extern void *lbl_80562948;
void *fn_800B8C04();
void *fn_800B8C40();
void fn_800B8D58();
void fn_800B8D80();
void *fn_800B8DF8();
}
struct UnknownGenRoot800B8C40 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B8C40(){fn_8006665C(this);}
};
struct UnknownGenObject800B8C40 : UnknownGenRoot800B8C40 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 char unknown1C[28];
 inline ~UnknownGenObject800B8C40(){unknown00=lbl_8047CEA0;}
};
extern "C" {
void *fn_800B8B7C(){
 char *data=lbl_80477D08;
 if(!lbl_80562944) lbl_80562944=fn_800635C8(data+0x1D04,data+0x1CDC,data+0x1CF0,0x5);
 return lbl_80562944;
}
void *fn_800B8BC8(){
 if(!lbl_80562948) lbl_80562948=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80562948;
}
void *fn_800B8C04(){
 if(!lbl_80562948 || !(reinterpret_cast<unsigned int *>(lbl_80562948)[0x24/4]&4)) fn_800B8D58();
 return lbl_80562948;
}
void *fn_800B8C40(){
 UnknownGenObject800B8C40 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047CEA0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B8D58(){
 fn_80066188((int)fn_800B8D80);
}
void fn_800B8D80(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_80562948,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B8DF8,(int)lbl_80479A28,52,(int)fn_800B8C40,(int)fn_800B8E18,0,(int)lbl_80479A18);
}
void *fn_800B8DF8(){return fn_800B8C04();}
}
#pragma pop
