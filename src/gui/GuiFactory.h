#pragma once

#include <QIcon>

#include "global/global.h"
#include "common/patterns/singleton_pattern.hpp"

namespace fastoredis
{
    class GuiFactory
            : public common::patterns::lazy_singleton<GuiFactory>
    {
    public:
        typedef common::patterns::lazy_singleton<GuiFactory> base_class;
        friend class common::patterns::lazy_singleton<GuiFactory>;
        const QIcon &openIcon() const;
        const QIcon &mainWindowIcon() const;
        const QIcon &connectIcon() const;
        const QIcon &disConnectIcon() const;
        const QIcon &redisConnectionIcon() const;
        const QIcon &serverIcon() const;
        const QIcon &addIcon() const;
        const QIcon &removeIcon() const;
        const QIcon &editIcon() const;
        const QIcon &messageBoxInformationIcon() const;
        const QIcon &executeIcon() const;
        const QIcon &stopIcon() const;
    };
}
