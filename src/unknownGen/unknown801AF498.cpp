#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80122790();
void fn_801AA6DC();
void *fn_801B74F0();
void igAnimationHierarchy_register();
void igNamedObject_register();
void igObjectList_register();
void igSkeleton_fieldInit();
extern char lbl_80472FA0[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC810[];
extern char lbl_804AC81C[];
extern char lbl_804AC838[];
extern char lbl_804AC848[];
extern char lbl_804B3810[];
extern char lbl_804B9324[];
extern char lbl_804B93A4[];
extern char lbl_804B9408[];
extern char lbl_804B946C[];
extern char lbl_804B94C8[];
extern char lbl_804B952C[];
extern char lbl_80560214[8];
extern char lbl_8056021C[7];
extern char lbl_80560224[8];
extern char lbl_80560234[8];
extern char lbl_8056023C[8];
extern char lbl_80560244[8];
extern char lbl_8056024C[8];
extern char lbl_80560254[8];
extern void *lbl_805621F4;
extern void *lbl_80564880;
extern void *lbl_80564884;
extern void *lbl_80564890;
extern void *lbl_80564894;
extern void *lbl_80565444;
void *igSkinList_getMeta();
void *igSkinList_vtableRead();
void fn_801AF580();
void igSkinList_register();
void *igSkinList_getMetaCall();
void *igSkin_getMeta();
void *igSkin_vtableRead();
void fn_801AF7C4();
void igSkin_register();
void *igSkin_getMetaCall();
void igSkin_fieldInit();
void *igSkeletonList_getMeta();
void *igSkeletonList_vtableRead();
void fn_801AFA00();
void igSkeletonList_register();
void *igSkeletonList_getMetaCall();
void *igSkeleton_getMeta();
void *igSkeleton_vtableRead();
void fn_801AFBE8();
void igSkeleton_register();
void *igSkeleton_getMetaCall();
void *igSkeleton_parentMeta();
}
struct UnknownGenObject801AF510_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AF6AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AF6AC(){fn_8006665C(this);}
};
struct UnknownGenObject801AF6AC_0 : UnknownGenRoot801AF6AC {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AF6AC_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AF6AC : UnknownGenObject801AF6AC_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[4];
 inline ~UnknownGenObject801AF6AC(){unknown00=lbl_804B946C;}
};
struct UnknownGenObject801AF990_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801AFAF0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AFAF0(){fn_8006665C(this);}
};
struct UnknownGenObject801AFAF0_0 : UnknownGenRoot801AFAF0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801AFAF0_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject801AFAF0_1 : UnknownGenObject801AFAF0_0 {
 inline ~UnknownGenObject801AFAF0_1(){unknown00=lbl_804B9324;}
};
struct UnknownGenObject801AFAF0 : UnknownGenObject801AFAF0_1 {
 char unknown0C[4];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject801AFAF0(){unknown00=lbl_804B3810;}
};
extern "C" {
void *fn_801AF498(){
 if(!lbl_80564880) lbl_80564880=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564880;
}
void *igSkinList_getMeta(){
 if(!lbl_80564880 || !(reinterpret_cast<unsigned int *>(lbl_80564880)[0x24/4]&4)) fn_801AF580();
 return lbl_80564880;
}
void *igSkinList_vtableRead(){
 UnknownGenObject801AF510_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B952C;
 object.unknown00=lbl_804B94C8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF580(){
 fn_80066188((int)igSkinList_register);
}
void igSkinList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564880,(int)igObjectList_register,(int)fn_80024180,(int)igSkinList_getMetaCall,(int)lbl_804AC810,20,(int)igSkinList_vtableRead,0,0,(int)lbl_80560214);
}
void *igSkinList_getMetaCall(){return igSkinList_getMeta();}
void *fn_801AF634(){
 if(!lbl_80564884) lbl_80564884=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564884;
}
void *igSkin_getMeta(){
 if(!lbl_80564884 || !(reinterpret_cast<unsigned int *>(lbl_80564884)[0x24/4]&4)) fn_801AF7C4();
 return lbl_80564884;
}
void *igSkin_vtableRead(){
 UnknownGenObject801AF6AC object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B946C;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AF7C4(){
 fn_80066188((int)igSkin_register);
}
void igSkin_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564884,(int)igNamedObject_register,(int)fn_80023CF4,(int)igSkin_getMetaCall,(int)lbl_8056021C,20,(int)igSkin_vtableRead,(int)igSkin_fieldInit,0,(int)lbl_804AC81C);
}
void *igSkin_getMetaCall(){return igSkin_getMeta();}
void igSkin_fieldInit(){
 void *value0=lbl_80564884;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560224,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_801B74F0();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80122790();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 fn_800659C0(value0,lbl_80560234,lbl_8056023C,lbl_80560244,value1);
}
void *fn_801AF918(){
 if(!lbl_80564890) lbl_80564890=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564890;
}
void *igSkeletonList_getMeta(){
 if(!lbl_80564890 || !(reinterpret_cast<unsigned int *>(lbl_80564890)[0x24/4]&4)) fn_801AFA00();
 return lbl_80564890;
}
void *igSkeletonList_vtableRead(){
 UnknownGenObject801AF990_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9408;
 object.unknown00=lbl_804B93A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFA00(){
 fn_80066188((int)igSkeletonList_register);
}
void igSkeletonList_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564890,(int)igObjectList_register,(int)fn_80024180,(int)igSkeletonList_getMetaCall,(int)lbl_804AC838,20,(int)igSkeletonList_vtableRead,0,0,(int)lbl_8056024C);
}
void *igSkeletonList_getMetaCall(){return igSkeletonList_getMeta();}
void *igSkeleton_getMeta(){
 if(!lbl_80564894 || !(reinterpret_cast<unsigned int *>(lbl_80564894)[0x24/4]&4)) fn_801AFBE8();
 return lbl_80564894;
}
void *igSkeleton_vtableRead(){
 UnknownGenObject801AFAF0 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_804B9324;
 object.unknown00=lbl_804B3810;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFBE8(){
 fn_80066188((int)igSkeleton_register);
}
void igSkeleton_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564894,(int)igAnimationHierarchy_register,(int)igSkeleton_parentMeta,(int)igSkeleton_getMetaCall,(int)lbl_804AC848,28,(int)igSkeleton_vtableRead,(int)igSkeleton_fieldInit,0,(int)lbl_80560254);
}
void *igSkeleton_getMetaCall(){return igSkeleton_getMeta();}
void *igSkeleton_parentMeta(){return lbl_80565444;}
}
#pragma pop
