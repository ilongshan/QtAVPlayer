/*********************************************************
 * Copyright (C) 2020, Val Doroshchuk <valbok@gmail.com> *
 *                                                       *
 * This file is part of QtAVPlayer.                      *
 * Free Qt Media Player based on FFmpeg.                 *
 *********************************************************/

#ifndef QAVFSUBTITLERAME_H
#define QAVFSUBTITLERAME_H

#include <QtAVPlayer/qavstreamframe.h>

QT_BEGIN_NAMESPACE

struct AVSubtitle;
class QAVSubtitleFramePrivate;
class Q_AVPLAYER_EXPORT QAVSubtitleFrame : public QAVStreamFrame
{
public:
    QAVSubtitleFrame(QObject *parent = nullptr);
    ~QAVSubtitleFrame();
    QAVSubtitleFrame(const QAVSubtitleFrame &other);
    QAVSubtitleFrame &operator=(const QAVSubtitleFrame &other);

    AVSubtitle *subtitle() const;

private:
    Q_DECLARE_PRIVATE(QAVSubtitleFrame)
};

Q_DECLARE_METATYPE(QAVSubtitleFrame)

QT_END_NAMESPACE

#endif
