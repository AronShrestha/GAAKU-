QT+= core gui sql

greaterThan(QT_MAJOR_VERSION,4): QT+=widgets

HEADERS += \
    admin_window.h \
    books.h \
    buyer.h \
    buyer_menu_page.h \
    buyer_seller.h \
    buyer_view_window.h \
    class_infp_.h \
    class_view.h \
    database.h \
    drawing.h \
    elearning1.h \
    electrical.h \
    furniture.h \
    grid_layout.h \
    loginpage.h \
    mainwindow.h \
    mapping.h \
    musical.h \
    others.h \
    q_pushbutton.h \
    readebooks.h \
    readenotes.h \
    readpastque.h \
    readpracque.h \
    secwindow.h \
    seller.h

SOURCES += \
    admin_window.cpp \
    books.cpp \
    buyer.cpp \
    buyer_menu_page.cpp \
    buyer_seller.cpp \
    buyer_view_window.cpp \
    class_infp_.cpp \
    class_view.cpp \
    database.cpp \
    drawing.cpp \
    elearning1.cpp \
    electrical.cpp \
    furniture.cpp \
    grid_layout.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    mapping.cpp \
    musical.cpp \
    others.cpp \
    q_pushbutton.cpp \
    readebooks.cpp \
    readenotes.cpp \
    readpastque.cpp \
    readpracque.cpp \
    secwindow.cpp \
    seller.cpp

RESOURCES += \
    img/resource_1.qrc
