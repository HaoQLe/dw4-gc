#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void igMacroOpt_register();
void igOptBase_register();
void igOptimizeActorKeyframes_fieldInit();
extern char igOptimizeActorSkinsInScenes_className[];
extern char igOptimizeActorSkeletons_className[];
extern char igOptimizeActorKeyframes_className[];
extern char igOptimizeActorSkinsInScenes_vtable[];
extern char igOptimizeActorSkeletons_vtable[];
extern char igOptimizeActorKeyframes_vtable[];
extern char lbl_804A4A04[];
extern char igMacroOpt_vtable[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F778[8];
extern char lbl_8055F780[8];
extern char lbl_8055F788[8];
extern char lbl_8055F790[8];
extern void *igOptimizeActorSkinsInScenes_meta;
extern void *igOptimizeActorSkeletons_meta;
extern void *igOptimizeActorKeyframes_meta;
extern void *igMacroOpt_meta;
void *igOptimizeActorSkinsInScenes_getMeta();
void *igOptimizeActorSkinsInScenes_vtableRead();
void igOptimizeActorSkinsInScenes_registerNow();
void igOptimizeActorSkinsInScenes_register();
void *igOptimizeActorSkinsInScenes_getMetaCall();
void *igOptimizeActorSkinsInScenes_parentMeta();
void *igOptimizeActorSkeletons_getMeta();
void *igOptimizeActorSkeletons_vtableRead();
void igOptimizeActorSkeletons_registerNow();
void igOptimizeActorSkeletons_register();
void *igOptimizeActorSkeletons_getMetaCall();
void igOptimizeActorSkeletons_fieldInit();
void *igOptimizeActorKeyframes_getMeta();
void *igOptimizeActorKeyframes_vtableRead();
void igOptimizeActorKeyframes_registerNow();
void igOptimizeActorKeyframes_register();
void *igOptimizeActorKeyframes_getMetaCall();
}
struct UnknownGenRoot80139E0C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80139E0C(){igObject_construct(this);}
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
 inline ~UnknownGenObject80139E0C_1(){unknown00=igMacroOpt_vtable;}
};
struct UnknownGenObject80139E0C : UnknownGenObject80139E0C_1 {
 char unknown30[8];
 inline ~UnknownGenObject80139E0C(){unknown00=igOptimizeActorSkinsInScenes_vtable;}
};
struct UnknownGenRoot8013A078 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A078(){igObject_construct(this);}
};
struct UnknownGenObject8013A078_0 : UnknownGenRoot8013A078 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A078_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A078 : UnknownGenObject8013A078_0 {
 char unknown28[8];
 inline ~UnknownGenObject8013A078(){unknown00=igOptimizeActorSkeletons_vtable;}
};
struct UnknownGenRoot8013A2EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013A2EC(){igObject_construct(this);}
};
struct UnknownGenObject8013A2EC_0 : UnknownGenRoot8013A2EC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013A2EC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013A2EC : UnknownGenObject8013A2EC_0 {
 char unknown28[24];
 inline ~UnknownGenObject8013A2EC(){unknown00=igOptimizeActorKeyframes_vtable;}
};
extern "C" {
void *igOptimizeActorSkinsInScenes_getMeta(){
 if(!igOptimizeActorSkinsInScenes_meta || !(reinterpret_cast<unsigned int *>(igOptimizeActorSkinsInScenes_meta)[0x24/4]&4)) igOptimizeActorSkinsInScenes_registerNow();
 return igOptimizeActorSkinsInScenes_meta;
}
void *igOptimizeActorSkinsInScenes_vtableRead(){
 UnknownGenObject80139E0C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igMacroOpt_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown00=igOptimizeActorSkinsInScenes_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptimizeActorSkinsInScenes_registerNow(){
 meta_registerNow((int)igOptimizeActorSkinsInScenes_register);
}
void igOptimizeActorSkinsInScenes_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptimizeActorSkinsInScenes_meta,(int)igMacroOpt_register,(int)igOptimizeActorSkinsInScenes_parentMeta,(int)igOptimizeActorSkinsInScenes_getMetaCall,(int)igOptimizeActorSkinsInScenes_className,48,(int)igOptimizeActorSkinsInScenes_vtableRead,0,0,0);
}
void *igOptimizeActorSkinsInScenes_getMetaCall(){return igOptimizeActorSkinsInScenes_getMeta();}
void *igOptimizeActorSkinsInScenes_parentMeta(){return igMacroOpt_meta;}
void *igOptimizeActorSkeletons_getMeta(){
 if(!igOptimizeActorSkeletons_meta || !(reinterpret_cast<unsigned int *>(igOptimizeActorSkeletons_meta)[0x24/4]&4)) igOptimizeActorSkeletons_registerNow();
 return igOptimizeActorSkeletons_meta;
}
void *igOptimizeActorSkeletons_vtableRead(){
 UnknownGenObject8013A078 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igOptimizeActorSkeletons_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptimizeActorSkeletons_registerNow(){
 meta_registerNow((int)igOptimizeActorSkeletons_register);
}
void igOptimizeActorSkeletons_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptimizeActorSkeletons_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igOptimizeActorSkeletons_getMetaCall,(int)igOptimizeActorSkeletons_className,44,(int)igOptimizeActorSkeletons_vtableRead,(int)igOptimizeActorSkeletons_fieldInit,0,0);
}
void *igOptimizeActorSkeletons_getMetaCall(){return igOptimizeActorSkeletons_getMeta();}
void igOptimizeActorSkeletons_fieldInit(){
 void *value0=igOptimizeActorSkeletons_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055F778,2);
 void *value2=meta_field(value0,value1);
 fn_8003EC68(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8003EC68(value3,1);
 meta_setupFields(value0,lbl_8055F780,lbl_8055F788,lbl_8055F790,value1);
}
void *igOptimizeActorKeyframes_getMeta(){
 if(!igOptimizeActorKeyframes_meta || !(reinterpret_cast<unsigned int *>(igOptimizeActorKeyframes_meta)[0x24/4]&4)) igOptimizeActorKeyframes_registerNow();
 return igOptimizeActorKeyframes_meta;
}
void *igOptimizeActorKeyframes_vtableRead(){
 UnknownGenObject8013A2EC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igOptimizeActorKeyframes_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igOptimizeActorKeyframes_registerNow(){
 meta_registerNow((int)igOptimizeActorKeyframes_register);
}
void igOptimizeActorKeyframes_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igOptimizeActorKeyframes_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igOptimizeActorKeyframes_getMetaCall,(int)igOptimizeActorKeyframes_className,64,(int)igOptimizeActorKeyframes_vtableRead,(int)igOptimizeActorKeyframes_fieldInit,0,0);
}
void *igOptimizeActorKeyframes_getMetaCall(){return igOptimizeActorKeyframes_getMeta();}
}
#pragma pop
