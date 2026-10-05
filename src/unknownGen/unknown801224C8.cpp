#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80053998(void *,void *);
void fn_8006588C(void *,void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void *fn_8011F274();
extern char lbl_8055F3E8[6];
extern void *lbl_80563A20;
extern char lbl_80563A24[4];
}
extern "C" {
void fn_801224C8(){
 void *meta=lbl_80563A20;
 UnknownGenField *field=reinterpret_cast<UnknownGenField *>(fn_800658F8(meta,lbl_8055F3E8));
 void *type=fn_80053998(reinterpret_cast<void **>(meta)[0x28/4],field);
 field=reinterpret_cast<UnknownGenFactory *>(field)->slot54(1);
 field->unknown3C=fn_8011F274();
 field->unknown38=0;
 field->unknown1C=lbl_80563A24;
 fn_8006588C(meta,type,field);
 unknownGenDrop(reinterpret_cast<UnknownGenValue *>(field));
}
}
#pragma pop
