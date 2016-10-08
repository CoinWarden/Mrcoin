// Copyright (c) 2011-2014 The Mrcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MrcoinADDRESSVALIDATOR_H
#define MrcoinADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class MrcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MrcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Mrcoin address widget validator, checks for a valid Mrcoin address.
 */
class MrcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit MrcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // MrcoinADDRESSVALIDATOR_H
