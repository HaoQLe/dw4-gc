#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800284EC();
void *fn_80029E64(void *);
void fn_8002EABC();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801B4280();
void fn_801BF938();
extern char lbl_80472460[];
extern char lbl_8047650C[];
extern char lbl_804AD340[];
extern char lbl_804AD34C[];
extern char lbl_804AD360[];
extern char lbl_804B3D68[];
extern char lbl_804B4038[];
extern char lbl_804B49CC[];
extern char lbl_804B877C[];
extern void *lbl_805621F4;
extern void *lbl_80564A10;
extern void *lbl_80564A14;
void *fn_801B3D0C();
void *fn_801B3D48();
void fn_801B3EC0();
void fn_801B3EE8();
void *fn_801B3F50();
void *fn_801B3FE4();
void *fn_801B4020();
void fn_801B41C0();
void fn_801B41E8();
void *fn_801B4260();
}
struct UnknownGenRoot801B3D48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B3D48(){fn_8006665C(this);}
};
struct UnknownGenObject801B3D48_0 : UnknownGenRoot801B3D48 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B3D48_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B3D48_1 : UnknownGenObject801B3D48_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801B3D48_1(){unknown00=lbl_804B4038;}
};
struct UnknownGenObject801B3D48_2 : UnknownGenObject801B3D48_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801B3D48_2(){unknown00=lbl_804B49CC;}
};
struct UnknownGenObject801B3D48 : UnknownGenObject801B3D48_2 {
 char unknown20[8];
 inline ~UnknownGenObject801B3D48(){unknown00=lbl_804B877C;}
};
struct UnknownGenRoot801B4020 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B4020(){fn_8006665C(this);}
};
struct UnknownGenObject801B4020_0 : UnknownGenRoot801B4020 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801B4020_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801B4020_1 : UnknownGenObject801B4020_0 {
 inline ~UnknownGenObject801B4020_1(){unknown00=lbl_80472460;}
};
struct UnknownGenObject801B4020 : UnknownGenObject801B4020_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 char unknown20[28];
 UnknownGenRefMember unknown3C;
 inline ~UnknownGenObject801B4020(){unknown00=lbl_804B3D68;}
};
extern "C" {
void *fn_801B3CD0(){
 if(!lbl_80564A10) lbl_80564A10=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A10;
}
void *fn_801B3D0C(){
 if(!lbl_80564A10 || !(reinterpret_cast<unsigned int *>(lbl_80564A10)[0x24/4]&4)) fn_801B3EC0();
 return lbl_80564A10;
}
void *fn_801B3D48(){
 UnknownGenObject801B3D48 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B4038;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=lbl_804B49CC;
 object.unknown1C.value=0;
 object.unknown00=lbl_804B877C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B3EC0(){
 fn_80066188((int)fn_801B3EE8);
}
void fn_801B3EE8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A10,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801B3F50,(int)lbl_804AD340,32,(int)fn_801B3D48,0,0,0);
}
void *fn_801B3F50(){return fn_801B3D0C();}
void *fn_801B3F70(void *object){
 fn_801B41C0();
 return fn_8006546C(lbl_80564A14,object);
}
void *fn_801B3FA8(){
 if(!lbl_80564A14) lbl_80564A14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564A14;
}
void *fn_801B3FE4(){
 if(!lbl_80564A14 || !(reinterpret_cast<unsigned int *>(lbl_80564A14)[0x24/4]&4)) fn_801B41C0();
 return lbl_80564A14;
}
void *fn_801B4020(){
 UnknownGenObject801B4020 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472460;
 object.unknown00=lbl_804B3D68;
 object.unknown14.value=0;
 object.unknown18.value=0;
 object.unknown1C.value=0;
 object.unknown3C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801B41C0(){
 fn_80066188((int)fn_801B41E8);
}
void fn_801B41E8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564A14,(int)fn_8002EABC,(int)fn_800284EC,(int)fn_801B4260,(int)lbl_804AD360,64,(int)fn_801B4020,(int)fn_801B4280,0,(int)lbl_804AD34C);
}
void *fn_801B4260(){return fn_801B3FE4();}
}
#pragma pop
