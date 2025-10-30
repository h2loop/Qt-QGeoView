/****************************************************************************
** Meta object code from reading C++ file 'QGVMap.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../lib/include/QGeoView/QGVMap.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGVMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6QGVMapE_t {};
} // unnamed namespace

template <> constexpr inline auto QGVMap::qt_create_metaobjectdata<qt_meta_tag_ZN6QGVMapE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QGVMap",
        "projectionChanged",
        "",
        "scaleChanged",
        "azimuthChanged",
        "areaChanged",
        "itemsChanged",
        "QGVItem*",
        "parent",
        "stateChanged",
        "QGV::MapState",
        "state",
        "itemClicked",
        "item",
        "projPos",
        "itemDoubleClicked",
        "mapMouseMove",
        "mapMousePress",
        "mapMouseDoubleClicked",
        "dropOnMap",
        "QGV::GeoPos",
        "pos",
        "const QMimeData*",
        "data"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'projectionChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scaleChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'azimuthChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'areaChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'itemsChanged'
        QtMocHelpers::SignalData<void(QGVItem *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'stateChanged'
        QtMocHelpers::SignalData<void(QGV::MapState)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Signal 'itemClicked'
        QtMocHelpers::SignalData<void(QGVItem *, QPointF)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 13 }, { QMetaType::QPointF, 14 },
        }}),
        // Signal 'itemDoubleClicked'
        QtMocHelpers::SignalData<void(QGVItem *, QPointF)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 13 }, { QMetaType::QPointF, 14 },
        }}),
        // Signal 'mapMouseMove'
        QtMocHelpers::SignalData<void(QPointF)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPointF, 14 },
        }}),
        // Signal 'mapMousePress'
        QtMocHelpers::SignalData<void(QPointF)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPointF, 14 },
        }}),
        // Signal 'mapMouseDoubleClicked'
        QtMocHelpers::SignalData<void(QPointF)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPointF, 14 },
        }}),
        // Signal 'dropOnMap'
        QtMocHelpers::SignalData<void(QGV::GeoPos, const QMimeData *)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 20, 21 }, { 0x80000000 | 22, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QGVMap, qt_meta_tag_ZN6QGVMapE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QGVMap::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QGVMapE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QGVMapE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6QGVMapE_t>.metaTypes,
    nullptr
} };

void QGVMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QGVMap *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->projectionChanged(); break;
        case 1: _t->scaleChanged(); break;
        case 2: _t->azimuthChanged(); break;
        case 3: _t->areaChanged(); break;
        case 4: _t->itemsChanged((*reinterpret_cast< std::add_pointer_t<QGVItem*>>(_a[1]))); break;
        case 5: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<QGV::MapState>>(_a[1]))); break;
        case 6: _t->itemClicked((*reinterpret_cast< std::add_pointer_t<QGVItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 7: _t->itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QGVItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 8: _t->mapMouseMove((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 9: _t->mapMousePress((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 10: _t->mapMouseDoubleClicked((*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[1]))); break;
        case 11: _t->dropOnMap((*reinterpret_cast< std::add_pointer_t<QGV::GeoPos>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<const QMimeData*>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QGV::GeoPos >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)()>(_a, &QGVMap::projectionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)()>(_a, &QGVMap::scaleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)()>(_a, &QGVMap::azimuthChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)()>(_a, &QGVMap::areaChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QGVItem * )>(_a, &QGVMap::itemsChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QGV::MapState )>(_a, &QGVMap::stateChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QGVItem * , QPointF )>(_a, &QGVMap::itemClicked, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QGVItem * , QPointF )>(_a, &QGVMap::itemDoubleClicked, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QPointF )>(_a, &QGVMap::mapMouseMove, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QPointF )>(_a, &QGVMap::mapMousePress, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QPointF )>(_a, &QGVMap::mapMouseDoubleClicked, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (QGVMap::*)(QGV::GeoPos , const QMimeData * )>(_a, &QGVMap::dropOnMap, 11))
            return;
    }
}

const QMetaObject *QGVMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGVMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6QGVMapE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QGVMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QGVMap::projectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGVMap::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGVMap::azimuthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGVMap::areaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGVMap::itemsChanged(QGVItem * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void QGVMap::stateChanged(QGV::MapState _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void QGVMap::itemClicked(QGVItem * _t1, QPointF _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void QGVMap::itemDoubleClicked(QGVItem * _t1, QPointF _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void QGVMap::mapMouseMove(QPointF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void QGVMap::mapMousePress(QPointF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void QGVMap::mapMouseDoubleClicked(QPointF _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void QGVMap::dropOnMap(QGV::GeoPos _t1, const QMimeData * _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 11, nullptr, _t1, _t2);
}
QT_WARNING_POP
