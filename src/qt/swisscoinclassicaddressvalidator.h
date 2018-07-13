// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SWISSCOINCLASSIC_QT_SWISSCOINCLASSICADDRESSVALIDATOR_H
#define SWISSCOINCLASSIC_QT_SWISSCOINCLASSICADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SwissCoinClassicAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SwissCoinClassicAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** SwissCoin Classic address widget validator, checks for a valid swisscoinclassic address.
 */
class SwissCoinClassicAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SwissCoinClassicAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SWISSCOINCLASSIC_QT_SWISSCOINCLASSICADDRESSVALIDATOR_H
