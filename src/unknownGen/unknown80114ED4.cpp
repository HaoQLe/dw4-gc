#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void *fn_801151EC();
extern char lbl_8055F25C[6];
extern void *lbl_80563844;
extern char lbl_80563848[4];
}
extern "C" {
void fn_80114ED4(){
 void *meta=lbl_80563844;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F25C));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_801151EC();
 field->unknown38=0;
 field->unknown1C=lbl_80563848;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
