#-------------------------------------------------
#
# Project created by QtCreator 2017-04-21T01:32:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Gui_Raspberry
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ak/ak.cpp \
    ak/fsm.cpp \
    ak/message.cpp \
    ak/timer.cpp \
    ak/tsm.cpp \
    app/app.cpp \
    app/app_data.cpp \
    app/if_console.cpp \
    app/if_rf24.cpp \
    app/if_rf433.cpp \
    app/task_console.cpp \
    app/task_digital_device.cpp \
    app/task_firmware.cpp \
    app/task_if.cpp \
    app/task_init_gateway.cpp \
    app/task_list.cpp \
    app/task_mqtt.cpp \
    app/task_query_address.cpp \
    app/task_register_device.cpp \
    app/task_rf433.cpp \
    app/task_sensor.cpp \
    app/task_sm.cpp \
    app/task_snmp.cpp \
    app/mqtt/mqtt_control.cpp \
    app/mqtt/mqtt_digital_device.cpp \
    app/mqtt/mqtt_sensor.cpp \
    app/mqtt/mqtt_setting.cpp \
    app/mqtt/mqtt_utils.cpp \
    common/api.cpp \
    common/cmd_line.cpp \
    common/fifo.cpp \
    common/firmware.cpp \
    common/jsmn.cpp \
    common/mac_address.cpp \
    common/random.cpp \
    common/slist.cpp \
    common/ui.cpp \
    driver/rc-switch/RCSwitch.cpp \
    sys/sys_dbg.cpp

HEADERS  += mainwindow.h \
    ak/ak.h \
    ak/ak_dbg.h \
    ak/fsm.h \
    ak/message.h \
    ak/timer.h \
    app/app.h \
    app/app_data.h \
    app/app_dbg.h \
    app/app_if.h \
    app/if_console.h \
    app/if_rf24.h \
    app/if_rf433.h \
    app/task_console.h \
    app/task_digital_device.h \
    app/task_firmware.h \
    app/task_if.h \
    app/task_init_gateway.h \
    app/task_list.h \
    app/task_list_if.h \
    app/task_mqtt.h \
    app/task_query_address.h \
    app/task_register_device.h \
    app/task_rf433.h \
    app/task_sensor.h \
    app/task_sm.h \
    app/task_snmp.h \
    app/mqtt/mqtt_control.h \
    app/mqtt/mqtt_digital_device.h \
    app/mqtt/mqtt_sensor.h \
    app/mqtt/mqtt_setting.h \
    app/mqtt/mqtt_utils.h \
    common/api.h \
    common/cmd_line.h \
    common/fifo.h \
    common/firmware.h \
    common/jsmn.h \
    common/mac_address.h \
    common/random.h \
    common/slist.h \
    common/ui.h \
    driver/rc-switch/RCSwitch.h \
    sys/sys_dbg.h

#CXX compiler option
QMAKE_CXXFLAGS	+=	-g -Os\
                -std=c++11		\
                -Wall			\
                -Winline		\
                -pipe			\
                -g			\
                -DRPI                   \

# Library paths
QMAKE_LFLAGS	+= -L/usr/local/lib
QMAKE_LFLAGS	+= -L/usr/include
#Library libs
LIBS	+=	-lpthread		\
                -lrt			\
                -lwiringPi		\
                -lwiringPiDev		\
                -lm			\
                -lrf24-bcm		\
                -lrf24network		\
                -lmosquittopp		\
                -lmosquitto
QMAKE_LFLAGS    += -L/usr/local/lib
QMAKE_LFLAGS    += -L/usr/include

FORMS    += mainwindow.ui

OTHER_FILES += \
    ak/Makefile.mk \
    app/Makefile.mk \
    app/mqtt/Makefile.mk \
    common/Makefile.mk \
    driver/rc-switch/Makefile.mk \
    sys/Makefile.mk
