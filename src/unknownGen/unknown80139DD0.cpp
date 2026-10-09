#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void igMacroOpt_register();
void igOptBase_register();
void igOptimizeActorKeyframes_fieldInit();
extern char lbl_8049D4FC[];
extern char lbl_8049D51C[];
extern char lbl_8049D568[];
extern char lbl_804A448C[];
extern char lbl_804A4514[];
extern char lbl_804A459C[];
extern char lbl_804A4A04[];
extern char lbl_804A6050[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F778[8];
extern char lbl_8055F780[8];
extern char lbl_8055F788[8];
extern char lbl_8055F790[8];
extern void *lbl_80563E18;
extern void *lbl_80563E1C;
extern void *lbl_80563E28;
extern void *lbl_8056407C;
void *igOptimizeActorSkinsInScenes_getMeta();
void *igOptimizeActorSkinsInScenes_vtableRead();
void fn_80139F84();
void igOptimizeActorSkinsInScenes_register();
void *igOptimizeActorSkinsInScenes_getMetaCall();
void *igOptimizeActorSkinsInScenes_parentMeta();
void *igOptimizeActorSkeletons_getMeta();
void *igOptimizeActorSkeletons_vtableRead();
void fn_8013A168();
void igOptimizeActorSkeletons_register();
void *igOptimizeActorSkeletons_getMetaCall();
void igOptimizeActorSkeletons_fieldInit();
void *igOptimizeActorKeyframes_getMeta();
void *igOptimizeActorKeyframes_vtableRead();
void fn_8013A3DC();
void igOptimizeActorKeyframes_register();
void *igOptimizeActorKeyframes_getMetaCall();
}
struct UnknownGenRoot80139E0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139E0C(){fn_8006665C(this);}
};
struct UnknownGenObject80139E0C_0 : UnknownGenRoot80139E0C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80139E0C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80139E0C_1 : UnknownGenObject80139E0C_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 inline ~UnknownGenObject80139E0C_1(){unknown00=lbl_804A6050;}
};
struct UnknownGenObject80139E0C : UnknownGenObject80139E0C_1 {
 char unknown30[8];
 inline ~UnknownGenObject80139E0C(){unknown00=lbl_804A448C;}
};
struct UnknownGenRoot8013A078 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A078(){fn_8006665C(this);}
};
struct UnknownGenObject8013A078_0 : UnknownGenRoot8013A078 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A078_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A078 : UnknownGenObject8013A078_0 {
 char unknown28[8];
 inline ~UnknownGenObject8013A078(){unknown00=lbl_804A4514;}
};
struct UnknownGenRoot8013A2EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A2EC(){fn_8006665C(this);}
};
struct UnknownGenObject8013A2EC_0 : UnknownGenRoot8013A2EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A2EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A2EC : UnknownGenObject8013A2EC_0 {
 char unknown28[24];
 inline ~UnknownGenObject8013A2EC(){unknown00=lbl_804A459C;}
};
extern "C" {
void *igOptimizeActorSkinsInScenes_getMeta(){
 if(!lbl_80563E18 || !(reinterpret_cast<unsigned int *>(lbl_80563E18)[0x24/4]&4)) fn_80139F84();
 return lbl_80563E18;
}
void *igOptimizeActorSkinsInScenes_vtableRead(){
 UnknownGenObject80139E0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A6050;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=lbl_804A448C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80139F84(){
 fn_80066188((int)igOptimizeActorSkinsInScenes_register);
}
void igOptimizeActorSkinsInScenes_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E18,(int)igMacroOpt_register,(int)igOptimizeActorSkinsInScenes_parentMeta,(int)igOptimizeActorSkinsInScenes_getMetaCall,(int)lbl_8049D4FC,48,(int)igOptimizeActorSkinsInScenes_vtableRead,0,0,0);
}
void *igOptimizeActorSkinsInScenes_getMetaCall(){return igOptimizeActorSkinsInScenes_getMeta();}
void *igOptimizeActorSkinsInScenes_parentMeta(){return lbl_8056407C;}
void *igOptimizeActorSkeletons_getMeta(){
 if(!lbl_80563E1C || !(reinterpret_cast<unsigned int *>(lbl_80563E1C)[0x24/4]&4)) fn_8013A168();
 return lbl_80563E1C;
}
void *igOptimizeActorSkeletons_vtableRead(){
 UnknownGenObject8013A078 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A4514;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013A168(){
 fn_80066188((int)igOptimizeActorSkeletons_register);
}
void igOptimizeActorSkeletons_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E1C,(int)igOptBase_register,(int)fn_801308D0,(int)igOptimizeActorSkeletons_getMetaCall,(int)lbl_8049D51C,44,(int)igOptimizeActorSkeletons_vtableRead,(int)igOptimizeActorSkeletons_fieldInit,0,0);
}
void *igOptimizeActorSkeletons_getMetaCall(){return igOptimizeActorSkeletons_getMeta();}
void igOptimizeActorSkeletons_fieldInit(){
 void *value0=lbl_80563E1C;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055F778,2);
 void *value2=fn_800658E4(value0,value1);
 fn_8003EC68(value2,1);
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value3,1);
 fn_800659C0(value0,lbl_8055F780,lbl_8055F788,lbl_8055F790,value1);
}
void *igOptimizeActorKeyframes_getMeta(){
 if(!lbl_80563E28 || !(reinterpret_cast<unsigned int *>(lbl_80563E28)[0x24/4]&4)) fn_8013A3DC();
 return lbl_80563E28;
}
void *igOptimizeActorKeyframes_vtableRead(){
 UnknownGenObject8013A2EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A459C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013A3DC(){
 fn_80066188((int)igOptimizeActorKeyframes_register);
}
void igOptimizeActorKeyframes_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563E28,(int)igOptBase_register,(int)fn_801308D0,(int)igOptimizeActorKeyframes_getMetaCall,(int)lbl_8049D568,64,(int)igOptimizeActorKeyframes_vtableRead,(int)igOptimizeActorKeyframes_fieldInit,0,0);
}
void *igOptimizeActorKeyframes_getMetaCall(){return igOptimizeActorKeyframes_getMeta();}
}
#pragma pop
