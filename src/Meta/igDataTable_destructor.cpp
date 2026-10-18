// fn_8014C8E8: the deleting destructor of igDataTable. Written by tools/alchemymeta/dtorsrc.py.
#include <meta/register.h>

META_DECLARE(igDataTable)
META_DECLARE(igNamedObject)
extern "C" {
void fn_80066DFC(void *object);   // frees an object
}

struct igNamedObjectObject {
    void *__vtable;
    char unknown04[4];
    igStringMember _name;
    inline ~igNamedObjectObject() { __vtable = igNamedObject_vtable; }
};
struct igDataTableObject : igNamedObjectObject {
    igObjectRefMember _formatList;
    igStringMember _separatorString;
    char unknown14[4];
    igObjectRefMember _columnList;
    igObjectRefMember _columnTitleList;
    igObjectRefMember _columnMetaEnumList;
    igObjectRefMember _columnWidthList;
    igObjectRefMember _columnAlignmentList;
    igObjectRefMember _columnInvisibleList;
};

extern "C" igDataTableObject *fn_8014C8E8(igDataTableObject *self, short flags)
{
    if (self) {
        self->__vtable = igDataTable_vtable;
        self->_columnInvisibleList.~igObjectRefMember();
        self->_columnAlignmentList.~igObjectRefMember();
        self->_columnWidthList.~igObjectRefMember();
        self->_columnMetaEnumList.~igObjectRefMember();
        self->_columnTitleList.~igObjectRefMember();
        self->_columnList.~igObjectRefMember();
        self->_separatorString.~igStringMember();
        self->_formatList.~igObjectRefMember();
        self->igNamedObjectObject::~igNamedObjectObject();
        if (flags > 0) fn_80066DFC(self);
    }
    return self;
}
