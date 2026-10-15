#include <unknownGen.h>
#include <meta/igMemoryDescriptorMetaField.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80024D1C();
void *fn_80033638();
void fn_8003A418(void *);
void *fn_80053998(void *,void *);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igCompoundMetaField_register();
void igDataList_register();
extern char igMemoryDescriptorList_className[];
extern char igMemoryDescriptorMetaField_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igMemoryDescriptorMetaField_vtable[];
extern char igMemoryDescriptorList_vtable[];
extern char lbl_80473730[];
extern char lbl_80474018[];
extern char lbl_8055D0A0[6];
extern char lbl_8055D6C8[8];
extern void *igMemoryDescriptorList_meta;
extern char lbl_80562008[4];
extern void *igMemoryDescriptorMetaField_meta;
extern void *lbl_80562010;
extern void *lbl_805621F4;
void *igMemoryDescriptorList_getMeta();
void *igMemoryDescriptorList_vtableRead();
void igMemoryDescriptorList_registerNow();
void igMemoryDescriptorList_register();
void *igMemoryDescriptorList_getMetaCall();
void fn_8003A0A4();
void *igMemoryDescriptorMetaField_getMeta();
void *igMemoryDescriptorMetaField_vtableRead();
void igMemoryDescriptorMetaField_registerNow();
void igMemoryDescriptorMetaField_register();
void *igMemoryDescriptorMetaField_getMetaCall();
void *fn_8003A3BC();
}
struct UnknownGenObject80039F94_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8003A19C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A19C(){fn_800638E0(this);}
};
struct UnknownGenObject8003A19C_0 : UnknownGenRoot8003A19C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8003A19C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8003A19C_1 : UnknownGenObject8003A19C_0 {
 char unknown10[36];
 UnknownGenRefMember unknown34;
 inline ~UnknownGenObject8003A19C_1(){unknown00=lbl_80474018;}
};
struct UnknownGenObject8003A19C : UnknownGenObject8003A19C_1 {
 char unknown38[8];
 inline ~UnknownGenObject8003A19C(){unknown00=igMemoryDescriptorMetaField_vtable;}
};
extern "C" {
void *igMemoryDescriptorList_getMeta(){
 if(!igMemoryDescriptorList_meta || !(reinterpret_cast<unsigned int *>(igMemoryDescriptorList_meta)[0x24/4]&4)) igMemoryDescriptorList_registerNow();
 return igMemoryDescriptorList_meta;
}
void *igMemoryDescriptorList_vtableRead(){
 UnknownGenObject80039F94_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80473730;
 object.unknown00=igMemoryDescriptorList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryDescriptorList_registerNow(){
 meta_registerNow((int)igMemoryDescriptorList_register);
}
void igMemoryDescriptorList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryDescriptorList_meta,(int)igDataList_register,(int)fn_80024D1C,(int)igMemoryDescriptorList_getMetaCall,(int)igMemoryDescriptorList_className,20,(int)igMemoryDescriptorList_vtableRead,(int)fn_8003A0A4,0,0);
}
void *igMemoryDescriptorList_getMetaCall(){return igMemoryDescriptorList_getMeta();}
void fn_8003A0A4(){
 void *meta=igMemoryDescriptorList_meta;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055D0A0));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8003A3BC();
 field->unknown38=0;
 field->unknown1C=lbl_80562008;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
void *igMemoryDescriptorMetaField_getMeta(){
 if(!igMemoryDescriptorMetaField_meta || !(reinterpret_cast<unsigned int *>(igMemoryDescriptorMetaField_meta)[0x24/4]&4)) igMemoryDescriptorMetaField_registerNow();
 return igMemoryDescriptorMetaField_meta;
}
void *igMemoryDescriptorMetaField_vtableRead(){
 UnknownGenObject8003A19C object;
 object.unknown00=lbl_80474018;
 object.unknown34.value=0;
 object.unknown00=igMemoryDescriptorMetaField_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryDescriptorMetaField_registerNow(){
 meta_registerNow((int)igMemoryDescriptorMetaField_register);
}
void igMemoryDescriptorMetaField_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryDescriptorMetaField_meta,(int)igCompoundMetaField_register,(int)fn_80033638,(int)igMemoryDescriptorMetaField_getMetaCall,(int)igMemoryDescriptorMetaField_className,56,(int)igMemoryDescriptorMetaField_vtableRead,0,0,(int)lbl_8055D6C8);
}
void *igMemoryDescriptorMetaField_getMetaCall(){return igMemoryDescriptorMetaField_getMeta();}
void fn_8003A324(){
 if(!lbl_80562010){
  void *object=(lbl_80562010=meta_createInstance(igMemoryDescriptorMetaField_meta,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80562010));
   reinterpret_cast<short *>(lbl_80562010)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80562010);
  }
 }
}
void *fn_8003A3BC(){
 if(!lbl_80562010){
  igMemoryDescriptorMetaField_registerNow();
 }
 return lbl_80562010;
}
int igMemoryDescriptorMetaField_virtual64(){return 4;}
void igMemoryDescriptorMetaField_virtual2C(int p0){
 fn_8003A418(reinterpret_cast<Meta::igMemoryDescriptorMetaField *>((void *)p0)->_fieldList);
}
}
#pragma pop
