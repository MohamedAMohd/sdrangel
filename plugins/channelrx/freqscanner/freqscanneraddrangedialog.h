///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2023 Jon Beniston, M7RCE                                        //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
// (at your option) any later version.                                           //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDE_FREQSCANNERADDRANGEDIALOG_H
#define INCLUDE_FREQSCANNERADDRANGEDIALOG_H

#include <QDialog>

namespace Ui {
    class FreqScannerAddRangeDialog;
}

class FreqScannerAddRangeDialog : public QDialog {
    Q_OBJECT
public:
    explicit FreqScannerAddRangeDialog(int step, QWidget* parent = nullptr);
    ~FreqScannerAddRangeDialog();

    QList<qint64> m_frequencies;

private slots:
    void accept();
    void on_preset_currentTextChanged(const QString& text);

private:
    Ui::FreqScannerAddRangeDialog *ui;
};

#endif // INCLUDE_FREQSCANNERADDRANGEDIALOG_H
