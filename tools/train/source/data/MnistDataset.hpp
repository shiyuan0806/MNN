//
//  MnistDataset.hpp
//  MNN
//
//  Created by MNN on 2019/11/15.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef MnistDataset_hpp
#define MnistDataset_hpp

#include <string>
#include "Dataset.hpp"
#include "Example.hpp"

using namespace MNN;
using namespace MNN::Train;

class MNN_PUBLIC MnistDataset : public Dataset {
public:
    enum Mode { TRAIN, TEST };

    explicit MnistDataset(const std::string path, Mode mode = Mode::TRAIN);

    Example get(size_t index) override;

    size_t size() override;

    const VARP images();

    const VARP labels();

private:
    VARP mImages, mLabels;
    const uint8_t* mImagePtr  = nullptr;
    const uint8_t* mLabelsPtr = nullptr;
};

#endif // MnistDataset_hpp
