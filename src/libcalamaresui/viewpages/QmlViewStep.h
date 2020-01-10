/* === This file is part of Calamares - <https://github.com/calamares> ===
 *
 *   Copyright 2020, Adriaan de Groot <groot@kde.org>
 *
 *   Calamares is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Calamares is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Calamares. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef QMLVIEWSTEP_H
#define QMLVIEWSTEP_H

#include "viewpages/ViewStep.h"

namespace Calamares
{

/** @brief A viewstep that uses QML for the UI
 *
 * This is generally a **base** class for other view steps, but
 * it can be used stand-alone for viewsteps that don't really have
 * any functionality.
 */
class QmlViewStep : public Calamares::ViewStep
{
    Q_OBJECT

public:
    QmlViewStep( const QString& name, QObject* parent = nullptr );
    virtual ~QmlViewStep() override;

    virtual QString prettyName() const override;

    virtual QWidget* widget() override;

    virtual bool isNextEnabled() const override;
    virtual bool isBackEnabled() const override;

    virtual bool isAtBeginning() const override;
    virtual bool isAtEnd() const override;

    virtual void onActivate() override;
    virtual void onLeave() override;

    virtual JobList jobs() const override;

private:
    QString m_name;
};

}  // namespace Calamares
#endif
