require './even'

RSpec.describe Even do
  let(:even) { Even.new(n) }
  describe '#even?' do
    subject { even.even? }

    context '1の場合' do
      let(:n) { 1 }

      it { is_expected.to eq false }
    end

    context '2の場合' do
      let(:n) { 2 }
      it { is_expected.to eq true }
    end
  end
end
