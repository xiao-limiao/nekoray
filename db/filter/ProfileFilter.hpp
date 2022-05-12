#ifndef NEKORAY_PROFILEFILTER_HPP
#define NEKORAY_PROFILEFILTER_HPP

#include "db/Database.hpp"

namespace NekoRay {
    class ProfileFilter {
    public:
        static void Uniq(
                const QList<QSharedPointer<ProxyEntity>> &in,
                QList<QSharedPointer<NekoRay::ProxyEntity>> &out,
                bool by_address = false, //def by bean
                bool keep_last = false //def keep first
        );

        static void Common(
                const QList<QSharedPointer<ProxyEntity>> &src,
                const QList<QSharedPointer<ProxyEntity>> &dst,
                QList<QSharedPointer<NekoRay::ProxyEntity>> &out,
                bool by_address = false, //def by bean
                bool keep_last = false //def keep first
        );

        static void OnlyInSrc(
                const QList<QSharedPointer<ProxyEntity>> &src,
                const QList<QSharedPointer<ProxyEntity>> &dst,
                QList<QSharedPointer<NekoRay::ProxyEntity>> &out,
                bool by_address = false //def by bean
        );

        static void OnlyInSrc_ByPointer(
                const QList<QSharedPointer<ProxyEntity>> &src,
                const QList<QSharedPointer<ProxyEntity>> &dst,
                QList<QSharedPointer<NekoRay::ProxyEntity>> &out
        );
    };
}

#endif //NEKORAY_PROFILEFILTER_HPP