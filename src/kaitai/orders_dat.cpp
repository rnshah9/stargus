// This is a generated file! Please edit source .ksy file and use kaitai-struct-compiler to rebuild

#include "orders_dat.h"

orders_dat_t::orders_dat_t(uint8_t p_num_lines, kaitai::kstream* p__io, kaitai::kstruct* p__parent, orders_dat_t* p__root) : kaitai::kstruct(p__io) {
    m__parent = p__parent;
    m__root = this;
    m_num_lines = p_num_lines;
    m_label = 0;
    m_use_weapon_targeting = 0;
    m_unknown2 = 0;
    m_unknown3 = 0;
    m_unknown4 = 0;
    m_unknown5 = 0;
    m_interruptible = 0;
    m_unknown7 = 0;
    m_queueable = 0;
    m_unknown9 = 0;
    m_unknown10 = 0;
    m_unknown11 = 0;
    m_unknown12 = 0;
    m_targeting = 0;
    m_energy = 0;
    m_animation = 0;
    m_highlight = 0;
    m_unknown17 = 0;
    m_obscured_order = 0;

    try {
        _read();
    } catch(...) {
        _clean_up();
        throw;
    }
}

void orders_dat_t::_read() {
    int l_label = num_lines();
    m_label = new std::vector<uint16_t>();
    m_label->reserve(l_label);
    for (int i = 0; i < l_label; i++) {
        m_label->push_back(m__io->read_u2le());
    }
    int l_use_weapon_targeting = num_lines();
    m_use_weapon_targeting = new std::vector<uint8_t>();
    m_use_weapon_targeting->reserve(l_use_weapon_targeting);
    for (int i = 0; i < l_use_weapon_targeting; i++) {
        m_use_weapon_targeting->push_back(m__io->read_u1());
    }
    int l_unknown2 = num_lines();
    m_unknown2 = new std::vector<uint8_t>();
    m_unknown2->reserve(l_unknown2);
    for (int i = 0; i < l_unknown2; i++) {
        m_unknown2->push_back(m__io->read_u1());
    }
    int l_unknown3 = num_lines();
    m_unknown3 = new std::vector<uint8_t>();
    m_unknown3->reserve(l_unknown3);
    for (int i = 0; i < l_unknown3; i++) {
        m_unknown3->push_back(m__io->read_u1());
    }
    int l_unknown4 = num_lines();
    m_unknown4 = new std::vector<uint8_t>();
    m_unknown4->reserve(l_unknown4);
    for (int i = 0; i < l_unknown4; i++) {
        m_unknown4->push_back(m__io->read_u1());
    }
    int l_unknown5 = num_lines();
    m_unknown5 = new std::vector<uint8_t>();
    m_unknown5->reserve(l_unknown5);
    for (int i = 0; i < l_unknown5; i++) {
        m_unknown5->push_back(m__io->read_u1());
    }
    int l_interruptible = num_lines();
    m_interruptible = new std::vector<uint8_t>();
    m_interruptible->reserve(l_interruptible);
    for (int i = 0; i < l_interruptible; i++) {
        m_interruptible->push_back(m__io->read_u1());
    }
    int l_unknown7 = num_lines();
    m_unknown7 = new std::vector<uint8_t>();
    m_unknown7->reserve(l_unknown7);
    for (int i = 0; i < l_unknown7; i++) {
        m_unknown7->push_back(m__io->read_u1());
    }
    int l_queueable = num_lines();
    m_queueable = new std::vector<uint8_t>();
    m_queueable->reserve(l_queueable);
    for (int i = 0; i < l_queueable; i++) {
        m_queueable->push_back(m__io->read_u1());
    }
    int l_unknown9 = num_lines();
    m_unknown9 = new std::vector<uint8_t>();
    m_unknown9->reserve(l_unknown9);
    for (int i = 0; i < l_unknown9; i++) {
        m_unknown9->push_back(m__io->read_u1());
    }
    int l_unknown10 = num_lines();
    m_unknown10 = new std::vector<uint8_t>();
    m_unknown10->reserve(l_unknown10);
    for (int i = 0; i < l_unknown10; i++) {
        m_unknown10->push_back(m__io->read_u1());
    }
    int l_unknown11 = num_lines();
    m_unknown11 = new std::vector<uint8_t>();
    m_unknown11->reserve(l_unknown11);
    for (int i = 0; i < l_unknown11; i++) {
        m_unknown11->push_back(m__io->read_u1());
    }
    int l_unknown12 = num_lines();
    m_unknown12 = new std::vector<uint8_t>();
    m_unknown12->reserve(l_unknown12);
    for (int i = 0; i < l_unknown12; i++) {
        m_unknown12->push_back(m__io->read_u1());
    }
    int l_targeting = num_lines();
    m_targeting = new std::vector<uint8_t>();
    m_targeting->reserve(l_targeting);
    for (int i = 0; i < l_targeting; i++) {
        m_targeting->push_back(m__io->read_u1());
    }
    int l_energy = num_lines();
    m_energy = new std::vector<uint8_t>();
    m_energy->reserve(l_energy);
    for (int i = 0; i < l_energy; i++) {
        m_energy->push_back(m__io->read_u1());
    }
    int l_animation = num_lines();
    m_animation = new std::vector<uint8_t>();
    m_animation->reserve(l_animation);
    for (int i = 0; i < l_animation; i++) {
        m_animation->push_back(m__io->read_u1());
    }
    int l_highlight = num_lines();
    m_highlight = new std::vector<uint16_t>();
    m_highlight->reserve(l_highlight);
    for (int i = 0; i < l_highlight; i++) {
        m_highlight->push_back(m__io->read_u2le());
    }
    int l_unknown17 = num_lines();
    m_unknown17 = new std::vector<uint16_t>();
    m_unknown17->reserve(l_unknown17);
    for (int i = 0; i < l_unknown17; i++) {
        m_unknown17->push_back(m__io->read_u2le());
    }
    int l_obscured_order = num_lines();
    m_obscured_order = new std::vector<uint8_t>();
    m_obscured_order->reserve(l_obscured_order);
    for (int i = 0; i < l_obscured_order; i++) {
        m_obscured_order->push_back(m__io->read_u1());
    }
}

orders_dat_t::~orders_dat_t() {
    _clean_up();
}

void orders_dat_t::_clean_up() {
    if (m_label) {
        delete m_label; m_label = 0;
    }
    if (m_use_weapon_targeting) {
        delete m_use_weapon_targeting; m_use_weapon_targeting = 0;
    }
    if (m_unknown2) {
        delete m_unknown2; m_unknown2 = 0;
    }
    if (m_unknown3) {
        delete m_unknown3; m_unknown3 = 0;
    }
    if (m_unknown4) {
        delete m_unknown4; m_unknown4 = 0;
    }
    if (m_unknown5) {
        delete m_unknown5; m_unknown5 = 0;
    }
    if (m_interruptible) {
        delete m_interruptible; m_interruptible = 0;
    }
    if (m_unknown7) {
        delete m_unknown7; m_unknown7 = 0;
    }
    if (m_queueable) {
        delete m_queueable; m_queueable = 0;
    }
    if (m_unknown9) {
        delete m_unknown9; m_unknown9 = 0;
    }
    if (m_unknown10) {
        delete m_unknown10; m_unknown10 = 0;
    }
    if (m_unknown11) {
        delete m_unknown11; m_unknown11 = 0;
    }
    if (m_unknown12) {
        delete m_unknown12; m_unknown12 = 0;
    }
    if (m_targeting) {
        delete m_targeting; m_targeting = 0;
    }
    if (m_energy) {
        delete m_energy; m_energy = 0;
    }
    if (m_animation) {
        delete m_animation; m_animation = 0;
    }
    if (m_highlight) {
        delete m_highlight; m_highlight = 0;
    }
    if (m_unknown17) {
        delete m_unknown17; m_unknown17 = 0;
    }
    if (m_obscured_order) {
        delete m_obscured_order; m_obscured_order = 0;
    }
}
