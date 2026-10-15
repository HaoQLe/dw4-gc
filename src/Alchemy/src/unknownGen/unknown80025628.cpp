#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void igStringMetaField_registerNow();
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_80071E44(void *);
void igStringMetaField_register();
extern char igStringArrayMetaField_className[];
extern char igStringArrayMetaField_vtable[];
extern char lbl_80471384[];
extern char lbl_80471914[];
extern char lbl_8047693C[];
extern char lbl_8055D100[8];
extern char lbl_8055D108[4];
extern char lbl_8055D10C[4];
extern char lbl_8055D110[4];
extern char lbl_8055D114[4];
extern void *igStringMetaField_meta;
extern void *lbl_805615B8;
extern void *igStringArrayMetaField_meta;
extern void *lbl_805615CC;
extern void *lbl_805621F4;
void *igStringArrayMetaField_getMeta();
void *igStringArrayMetaField_vtableRead();
void igStringArrayMetaField_registerNow();
void igStringArrayMetaField_register();
void *igStringArrayMetaField_getMetaCall();
void *igStringArrayMetaField_parentMeta();
void igStringArrayMetaField_fieldInit();
}
struct UnknownGenRoot8002572C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002572C(){fn_80071E44(this);}
};
struct UnknownGenObject8002572C_0 : UnknownGenRoot8002572C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8002572C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8002572C_1 : UnknownGenObject8002572C_0 {
 inline ~UnknownGenObject8002572C_1(){unknown00=lbl_80471384;}
};
struct UnknownGenObject8002572C_2 : UnknownGenObject8002572C_1 {
 inline ~UnknownGenObject8002572C_2(){unknown00=lbl_8047693C;}
};
struct UnknownGenObject8002572C : UnknownGenObject8002572C_2 {
 char unknown10[48];
 inline ~UnknownGenObject8002572C(){unknown00=igStringArrayMetaField_vtable;}
};
extern "C" {
void fn_80025628(){
 if(!lbl_805615B8){
  void *object=(lbl_805615B8=meta_createInstance(igStringMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615B8));
   reinterpret_cast<short *>(lbl_805615B8)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615B8);
  }
 }
}
void *fn_800256C0(){
 if(!lbl_805615B8){
  igStringMetaField_registerNow();
 }
 return lbl_805615B8;
}
void *igStringArrayMetaField_getMeta(){
 if(!igStringArrayMetaField_meta || !(reinterpret_cast<unsigned int *>(igStringArrayMetaField_meta)[0x24/4]&4)) igStringArrayMetaField_registerNow();
 return igStringArrayMetaField_meta;
}
void *igStringArrayMetaField_vtableRead(){
 UnknownGenObject8002572C object;
 object.unknown00=igStringArrayMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStringArrayMetaField_registerNow(){
 meta_registerNow((int)igStringArrayMetaField_register);
}
void igStringArrayMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igStringArrayMetaField_meta,(int)igStringMetaField_register,(int)igStringArrayMetaField_parentMeta,(int)igStringArrayMetaField_getMetaCall,(int)igStringArrayMetaField_className,64,(int)igStringArrayMetaField_vtableRead,(int)igStringArrayMetaField_fieldInit,0,(int)lbl_8055D100);
}
void *igStringArrayMetaField_getMetaCall(){return igStringArrayMetaField_getMeta();}
void *igStringArrayMetaField_parentMeta(){return igStringMetaField_meta;}
void igStringArrayMetaField_fieldInit(){
 void *meta=igStringArrayMetaField_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_8055D108,1);
 fn_80053650(fn_800658E4(meta,field),1);
 fn_800659C0(meta,lbl_8055D10C,lbl_8055D110,lbl_8055D114,field);
}
void fn_80025910(){
 if(!lbl_805615CC){
  void *object=(lbl_805615CC=meta_createInstance(igStringArrayMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805615CC));
   reinterpret_cast<short *>(lbl_805615CC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805615CC);
  }
 }
}
}
#pragma pop
